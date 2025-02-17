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

int	ft_putpointer(unsigned long n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		return (ft_putstr("(nil)"));
	}
	count += ft_putstr("0x");
	if (n >= 16)
		count += ft_putpointer(n / 16);
	ft_putchar("0123456789abcdef"[n % 16]);
	count++;
	return (count);
}
