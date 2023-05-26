/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdjalla <abdjalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:40:10 by abdjalla          #+#    #+#             */
/*   Updated: 2023/05/23 18:40:10 by abdjalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar(char c);
int	ft_printf(const char *str, ...);
int	ft_put_hex(unsigned int num, const char format, int *x);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putunsigned(unsigned int n);
int	nbrlen(int x);
int	ft_put_pointer(unsigned long num, int *x);
int	ft_formatchecker(va_list args, char c);

#endif