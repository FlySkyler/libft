/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:49:28 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/08 16:45:33 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, t_size num)
{
	unsigned char	*str1;
	unsigned char	*str2;
	t_size			i;

	str1 = (unsigned char *)ptr1;
	str2 = (unsigned char *)ptr2;
	while (str1[i] == str2[i] && i < num)
	{
		i++;
	}
	return ((int)(str1[i] - str2[i]));
}
