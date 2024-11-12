/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:02:10 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/12 16:32:00 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcpy(char *src, const char *dst, t_size n)
{
	t_size	i;
	char *str;

	i = 0;
	str = (char *)dst;
	while (i < n)
	{
		str[i] = src[i];
		i++;
	}
	return (i);
}
