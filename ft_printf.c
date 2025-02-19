/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:22:29 by frea              #+#    #+#             */
/*   Updated: 2025/01/24 15:49:32 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_valid_format(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' 
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%');
}

int	ft_put(char c, va_list args)
{
	int	count;

	count = 0;
	if (!ft_is_valid_format(c))
		return (ft_printf("%%%c", c));
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_putuns(va_arg(args, unsigned int));
	else if (c == 'p')
		count += ft_putpointer((uintptr_t)va_arg(args, void *));
	else if (c == 'x')
		count += ft_puthexlow(va_arg(args, unsigned int));
	else if (c == 'X')
		count += ft_puthexupper(va_arg(args, unsigned int));
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		buff;

	va_start(args, str);
	count = 0;
	buff = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			buff += ft_put(*(str), args);
		}
		else
			buff += ft_putchar(*str);
		if (buff < 0)
			return (buff);
		count += buff;
		buff = 0;
		str++;
	}
	va_end(args);
	return (count);
}
