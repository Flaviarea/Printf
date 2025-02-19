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

int	ft_putlow(uintptr_t n)
{
	int		count;
	char	*hex_chars;

	count = 0;
	hex_chars = "0123456789abcdef";
	if (n >= 16)
		count += ft_putlow(n / 16);
	count += ft_putchar(hex_chars[n % 16]);
	return (count);
}

int	ft_putpointer(uintptr_t n)
{
	int		count;

	count = 0;
	if (n == 0)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	ft_putstr("0x");
	count += ft_putlow(n);
	return (count);
}
