/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:21:12 by frea              #+#    #+#             */
/*   Updated: 2025/01/21 21:21:17 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib>
#include <unistd.h>
#include <stdint.h>

int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putnbr(int n);
int	ft_putnbr_hex(size_t n, char c);
int	ft_putuns(unsigned int n);
int	ft_putp(void *ptr);
int	ft_put(char c; va_list args);
int	ft_printf(const char *s, ...);

#endif
