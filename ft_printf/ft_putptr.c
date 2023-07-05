/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:52:00 by moalgafr          #+#    #+#             */
/*   Updated: 2023/02/25 19:39:52 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcharptr(unsigned long long nbr)
{
	char	*nb;
	int		count;

	count = 0;
	nb = "0123456789abcdef";
	if (nbr >= 16)
		count += ft_putcharptr(nbr / 16);
	count += ft_putchar(nb[nbr % 16]);
	return (count);
}

int	ft_putptr(unsigned long long nbr)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_putcharptr(nbr);
	return (count);
}
