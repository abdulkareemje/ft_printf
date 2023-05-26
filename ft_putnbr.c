/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdjalla <abdjalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:32:19 by abdjalla          #+#    #+#             */
/*   Updated: 2023/05/26 11:32:19 by abdjalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	x;

	x = nbrlen(n);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr("-2147483648");
			return (x);
		}
		ft_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar('0' + n);
	return (x);
}
