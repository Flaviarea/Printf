/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthexupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:25:31 by frea              #+#    #+#             */
/*   Updated: 2025/02/12 15:25:34 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*	ft_puthexupper:
**	Outputs 
**	Return: 
*/

int	ft_puthexupper(unsigned int n)
{
	int	count;
	char	*hex_chars = "0123456789ABCDEF";

	count = 0;
	if (n > 16)
		count += ft_puthexupper(n / 16);
	count += ft_putchar(hex_chars[n % 16]);
	return (count);
}