/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:45:36 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/12 19:22:16 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size n)
{
	t_size	dst_len;
	t_size	src_len;
	t_size	i;

	dst_len = 0;
	while (dst[dst_len] && dst_len < n)
		dst_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (n <= dst_len)
		return (n + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < (n - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
