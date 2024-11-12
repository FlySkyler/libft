/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:51:00 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/12 14:45:07 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	totrim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	endtrim(const char *s1, const char *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (totrim(set, s1[i]) == 1)
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = endtrim(s1, set);
	str = malloc(ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	while (totrim(set, s1[i]) == 1)
		i++;
	while (s1[i] && i <= len)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
