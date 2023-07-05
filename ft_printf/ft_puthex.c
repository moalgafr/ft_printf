/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 04:00:14 by moalgafr          #+#    #+#             */
/*   Updated: 2023/02/11 20:05:16 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count(unsigned int p)
{
	int	count;

	count = 0;
	if (p == 0)
		return (1);
	while (p != '\0')
	{
		count++;
		p = p / 16;
	}
	return (count);
}

int	ft_puthex(unsigned int nbr, char c)
{
	char	*nb;

	if (c == 'x')
	nb = "0123456789abcdef";
	else
	nb = "0123456789ABCDEF";
	if (nbr >= 16)
		ft_puthex(nbr / 16, c);
	ft_putchar(nb[nbr % 16]);
	return (ft_count(nbr));
}
