/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:04:12 by frea              #+#    #+#             */
/*   Updated: 2025/01/28 19:04:13 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*	ft_putuns:
**	Outputs only non-negative numbers.
**	The function recursively divides 'n' by 10 to process each digit,
**	and then writes each digit to the standard output using ft_putchar.
**	Return: The total number of characters written.
*/

int	ft_putuns(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putuns(n / 10);
	count += ft_putchar("0123456789"[n % 10]);
	return (count);
}
