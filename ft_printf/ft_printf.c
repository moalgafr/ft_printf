/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:35:34 by moalgafr          #+#    #+#             */
/*   Updated: 2023/03/16 22:16:59 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkers(va_list arg, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = len + ft_putchar(va_arg(arg, int));
	else if (c == 's')
		len = len + ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		len = len + ft_putnbr(va_arg(arg, int));
	else if (c == 'x' || c == 'X')
		len = len + ft_puthex(va_arg(arg, unsigned int), c);
	else if (c == '%')
		len = len + ft_putchar('%');
	else if (c == 'u')
		len = len + ft_putuns(va_arg(arg, unsigned int));
	else if (c == 'p')
		len = len + ft_putptr(va_arg(arg, unsigned long long));
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	arg;

	i = 0;
	len = 0;
	if (!s[i])
		return (0);
	va_start(arg, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
			len = len + ft_checkers(arg, s[++i]);
		else
			len = len + ft_putchar(s[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
