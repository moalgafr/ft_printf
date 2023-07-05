/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:06:04 by moalgafr          #+#    #+#             */
/*   Updated: 2023/02/11 20:08:33 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 9)
	{
		count += ft_putchar(n + '0');
	}
	else
	{
		count += ft_putnbr (n / 10);
		count += ft_putchar ((n % 10) + '0');
	}
	return (count);
}
