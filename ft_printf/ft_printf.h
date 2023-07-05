/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 01:50:48 by moalgafr          #+#    #+#             */
/*   Updated: 2023/03/16 22:17:20 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_puthex(unsigned int nbr, const char c);
int	ft_putuns(unsigned int n);
int	ft_putptr(unsigned long long nbr);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);

#endif