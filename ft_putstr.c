/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:04:00 by frea              #+#    #+#             */
/*   Updated: 2025/01/28 19:04:02 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s);
{
	int	count;
	
	count = 0;
	if (!s)
	{
		write (1, "(null)", 3);
		return (3);
	}
	while (*s)
	{
		count += write (1, &s, 1);
		s++;
	}
	return(count);
}
