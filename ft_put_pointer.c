/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdjalla <abdjalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:39:00 by abdjalla          #+#    #+#             */
/*   Updated: 2023/05/26 11:39:00 by abdjalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(unsigned long num, int *x)
{
	if (num >= 16)
	{
		ft_put_pointer(num / 16, x);
		ft_put_pointer(num % 16, x);
	}
	else
	{
		if (num <= 9)
			*x += ft_putchar(num + '0');
		else
			*x += ft_putchar(num - 10 + 'a');
	}
	return (*x);
}
