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

	count = 0;
	if (n < 15)
		count += ft_puthexupper(n / 16);
	ft_putchar("123456789ABCDEF"[n % 16]);
	return (count + 1);
}
