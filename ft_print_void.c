/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:35:34 by rlarabi           #+#    #+#             */
/*   Updated: 2022/11/05 17:08:02 by rlarabi          ###   ########.fr       */
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

int	ft_print_void(void *p)
{
	int	a;

	a = ft_putstr("0x");
	a += hexa_unsigned_long((size_t)p, 'x');
	return (a);
}
