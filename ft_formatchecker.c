/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kdk.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdjalla <abdjalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:15:02 by abdjalla          #+#    #+#             */
/*   Updated: 2023/05/26 11:15:02 by abdjalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatchecker(va_list args, char c)
{
	int	type;

	type = 0;
	if (c == 'c')
		type += ft_putchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		type = ft_putnbr(va_arg(args, int));
	else if (c == 's')
		type += ft_putstr(va_arg(args, char *));
	else if (c == 'u')
		type += ft_putunsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		ft_put_hex(va_arg(args, unsigned int), c, &type);
	else if (c == 'p')
	{
		type += write(1, "0x", 2);
		ft_put_pointer(va_arg(args, unsigned long), &type);
	}
	else
		type += ft_putchar(c);
	return (type);
}
