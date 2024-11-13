/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:36:36 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/13 15:54:21 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_copy(char *str, char *str2, t_size len)
{
	while (len > 0)
	{
		len--;
		str[len] = str2[len];
	}
	return (str);
}

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	t_size	i;
	char	*str;
	char	*str2;

	if (!dst && !src)
		return (dst);
	str = (char *)dst;
	str2 = (char *)src;
	i = 0;
	if (str2 < str)
	{
		ft_copy(str, str2, len);
	}
	else
	{
		while (i < len)
		{
			str[i] = str2[i];
			i++;
		}
	}
	return (dst);
}
