/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:45:36 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/08 13:51:15 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *src, char *dest, t_size n)
{
	t_size	i;
	t_size	j;
	t_size	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] && i < n)
		i++;
	while (src[j])
		j++;
	if (n == 0)
		return (j);
	while (src[k] && i + k < n - 1)
	{
		dest[i + k] = src[k];
		k++;
	}
	if ((i + k) < n)
		dest[i + k] = '\0';
	return (i + j);
}
