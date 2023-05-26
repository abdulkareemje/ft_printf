/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdjalla <abdjalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:43:46 by abdjalla          #+#    #+#             */
/*   Updated: 2023/05/17 22:43:46 by abdjalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		counter;
	int		type;
	va_list	args;

	counter = 0;
	type = 0;
	va_start(args, str);
	while (str[counter] != '\0')
	{
		if (str[counter] == '%')
		{	
			counter++;
			type += ft_formatchecker(args, str[counter]);
			counter++;
		}
		else
		{
			type += write(1, &str[counter], 1);
			counter++;
		}
	}
	va_end (args);
	return (type);
}
// // int main()
// // {
// //     ft_printf(" %p\n %p\n ", LONG_MIN, LONG_MAX);
// // 	write(1, "\n", 1);
// // 	printf(" %p\n %p\n ", LONG_MIN, LONG_MAX);
// // }

// int main()
// {
// 	int *p = 0;
// 	char str[5] = "hello";
// 	// int i = -55;
// 	ft_printf("%p\n", &p);
// 	//write(1, "\n", 1);
// 	//ft_printf();
// }
