/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:07:35 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/13 12:16:11 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, fd);
		ft_putchar(n % 10 + '0', fd);
	}
	else
		ft_putchar(n + '0', fd);
}
