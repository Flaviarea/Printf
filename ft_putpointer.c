/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:04:22 by frea              #+#    #+#             */
/*   Updated: 2025/01/28 19:04:23 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*	ft_putp:
**	Outputs the hexadecimal representation of a pointer
**
*/

int	ft_putpointer(unsigned long n)
{
    unsigned long   nbr;
    int     count

    nbr = (unsigned long)ptr;
    count = 0;

    if (!ptr)
        return (ft_putstr("(nil)"));
        count += ft_putstr("0x");

    if (n >= 16)
        count += ft_putp((void*)(n / 16));
    ft_putchar("0123456789abcdef"[n % 16]);
    count++;
    return (count);
}


