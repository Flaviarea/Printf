/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:04:00 by frea              #+#    #+#             */
/*   Updated: 2025/02/10 15:40:44 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		return(ft_putstr("(null)"));
	}
	while (*s)
	{
		count += ft_putchar(*s);
		s++;
	}
	return (count);
}