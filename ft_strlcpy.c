/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:02:10 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/08 13:51:15 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcpy(char *src, char *dst, t_size n)
{
	t_size	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (i);
}
