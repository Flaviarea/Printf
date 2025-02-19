/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:28:25 by frea              #+#    #+#             */
/*   Updated: 2025/01/28 18:28:27 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put(char c, va_list args)
{
	int	count;

	count = 0;
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
