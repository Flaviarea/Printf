/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:17:57 by frea              #+#    #+#             */
/*   Updated: 2025/01/28 18:17:59 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*	ft_putchar:
**	Writes the character 'c' to the standard output.
**	Returns the number of characters written, which is always 1.
*/

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}