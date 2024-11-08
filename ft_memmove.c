/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:36:36 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/08 15:25:30 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	t_size	i;
	char	*str;
	char	*str2;

	str = (char *)dst;
	str2 = (char *)src;
	i = 0;
	if (str2 < str)
	{
		while (len > 0)
		{
			len--;
			str[len] = str2[len];
		}
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
