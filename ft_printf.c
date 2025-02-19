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

int	ft_is_valid_format(char c);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if(!*str)
				break;
			if (!ft_is_valid_format(*str))
			{
				count += ft_putchar('%');
				count += ft_putchar(*str);
			}
			else
				count += ft_put(*str, args);
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}

int ft_is_valid_format(char c)
{
    return (c == 'c' || c == 's' || c == 'p' || c == 'd' || 
            c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%');
}