/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdjalla <abdjalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:13:25 by abdjalla          #+#    #+#             */
/*   Updated: 2023/05/24 13:13:25 by abdjalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unbrlen(unsigned int x)
{
	int	len;

	len = 0;
	if (x <= 9 && x <= 0)
		return (1);
	else if (x > 0)
		len = 1;
	while (x != 0)
	{
		x = x / 10;
		len++;
	}
	return (len);
}

int	ft_putunsigned(unsigned int n)
{
	int	len;

	len = unbrlen(n);
	if (n == 4294967295)
	{
		ft_putstr("4294967295");
		return (len);
	}
	if (n / 10)
	{
		ft_putunsigned(n / 10);
		ft_putunsigned(n % 10);
	}
	else
		ft_putchar('0' + n);
	return (len);
}
