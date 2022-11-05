/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_unsigned_long.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:11:40 by rlarabi           #+#    #+#             */
/*   Updated: 2022/11/04 23:25:41 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexa_unsigned_long(size_t l, char x)
{
	int	a;
	int	b;

	b = 0;
	if (x == 'x')
		a = 87;
	if (x == 'X')
		a = 55;
	if (l >= 16)
	{
		b += hexa_unsigned_long(l / 16, x);
		l %= 16;
	}
	if (l < 16)
	{
		if (l >= 10)
			b += ft_putchar(l + a);
		else
			b += ft_putchar(l + '0');
	}
	return (b);
}
