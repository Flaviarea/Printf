/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:21:26 by frea              #+#    #+#             */
/*   Updated: 2025/02/12 15:21:39 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*	ft_puthexlow:
**	Outputs 
**	Return: 
*/

int	ft_puthexlow(unsigned int n)
{
	int	count;
	char	*hex_chars = "0123456789abcdef";

	count = 0;
	if (n >= 16)
		count += ft_puthexlow(n / 16);
	count += ft_putchar(hex_chars[n % 16]);
	return (count);
}