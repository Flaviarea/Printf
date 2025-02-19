/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:03:46 by frea              #+#    #+#             */
/*   Updated: 2025/01/28 19:03:48 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*	ft_putnbr:
**	Outputs integers handling negative cases.
**	Return: The total number of characters written.
*/

int	ft_putnbr_unsigned(unsigned long nb);

int	ft_putnbr(int n)
{
	int					count;
	unsigned long int	nb;

	count = 0;
	nb = (unsigned long)n;
	if (n < 0)
	{
		count += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb == 0)
		return (count + ft_putchar('0'));
	count += ft_putnbr_unsigned(nb);
	return (count);
}

int	ft_putnbr_unsigned(unsigned long nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_putnbr_unsigned(nb / 10);
	count += ft_putchar((char)(nb % 10 + '0'));
	return (count);
}