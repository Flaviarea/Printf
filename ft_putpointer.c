/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                          :+:      :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:04:22 by frea              #+#    #+#             */
/*   Updated: 2025/01/28 19:04:23 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*	ft_putpointer:
**	Outputs the hexadecimal representation of a pointer
**
*/

int	ft_putpointer_hex(uintptr_t n);

int	ft_putpointer(uintptr_t n)
{
	int	count;
	size_t	digits;
	uintptr_t	tmp;

	count = 0;
	digits = 0;
	tmp = n;
	if (n == 0)
	{
		while (digits++ < (sizeof(uintptr_t) * 2))
			count += ft_putchar('0');
		return (count);
	}
	while (tmp)
	{
		tmp /= 16;
		digits++;
	}
	while (digits++ < (sizeof(uintptr_t) * 2))
		count += ft_putchar('0');
	count += ft_putpointer_hex(n);
	return (count);
}

int	ft_putpointer_hex(uintptr_t n)
{
	int		count;
	char	*hex_chars;

	hex_chars = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_putpointer_hex(n / 16);
	count += ft_putchar(hex_chars[n % 16]);
	return (count);
}