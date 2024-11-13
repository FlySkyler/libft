/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:15:03 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/13 11:13:58 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	ft_reverse(char *str, int start, int end)
{
	char	temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
int	ft_nb(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		i;
	int		nb;

	i = 0;
	len = ft_length(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		str[i++] = '-';
	nb = ft_nb(n);
	while (nb > 0)
	{
		str[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	str[i] = '\0';
	if (n < 0)
		ft_reverse(str, 1, i - 1);
	else
		ft_reverse(str, 0, i - 1);
	return (str);
}

int	main(void)
{
	int n = -2147483648;
	printf("%s\n", ft_itoa(n));
	return (0);
}