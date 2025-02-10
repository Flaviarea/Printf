/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:04:40 by frea              #+#    #+#             */
/*   Updated: 2025/01/28 19:04:41 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*	ft_putnbr_hex:
**	Outputs hexadecimals (base 16).
**	Return: The total number of characters written.
*/

int	ft_puthexlow(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 15)
		count += ft_puthexlow(n / 16);
	ft_putchar("0123456789abcdef")[n % 16];
	return (count + 1);
}

int	ft_puthexupper(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 15)
		count += ft_puthexupper(n / 16);
	ft_putchar("123456789ABCDEF"[n % 16]);
	return (count + 1);
}
