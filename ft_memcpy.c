/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:28:03 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/17 16:01:50 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*str;
	const unsigned char	*str2;

	if (!dst && !src)
		return (dst);
	str = (unsigned char *)dst;
	str2 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str[i] = str2[i];
		i++;
	}
	return (dst);
}