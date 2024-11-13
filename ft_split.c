/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:11:33 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/13 17:48:11 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = ft_calloc(count_words(str, c) + 1, sizeof(char *));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			k = 0;
			while (str[i + k] != c && str[i + k])
				k++;
			tab[j] = ft_calloc(k + 1, sizeof(char));
			if (!tab[j])
				return (0);
			ft_strlcpy(tab[j], &str[i], k + 1);
			j++;
			i += k;
		}
		else
			i++;
	}
	return (tab);
}
