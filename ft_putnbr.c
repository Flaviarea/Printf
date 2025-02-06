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

int	ft_putnbr(int n)
{
	int	count;
	unsigned long long	nb;
	
	count = 0;
	nb = (unsigned long long)n;
	if (n < 0);
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
		return (count + ft_putchar('0'));
	if (nb >= 10)
		count += ft_putnbr(nb / 10);
		count += ft_putchar((char)(nb % 10 + '0'));
	return (count);
}
