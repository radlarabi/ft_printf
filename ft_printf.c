/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:56:57 by rlarabi           #+#    #+#             */
/*   Updated: 2022/11/05 15:56:45 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	check_format(va_list args, const char *str)
{
	int	ret;

	ret = 0;
	if (*(str + 1) == 'd' || *(str + 1) == 'i')
		ret += ft_putnbr(va_arg(args, int));
	else if (*(str + 1) == 's')
		ret += ft_putstr(va_arg(args, char *));
	else if (*(str + 1) == 'c')
		ret += ft_putchar(va_arg(args, int));
	else if (*(str + 1) == '%')
		ret += ft_putchar('%');
	else if (*(str + 1) == 'X')
		ret += hexa(va_arg(args, size_t), 'X');
	else if (*(str + 1) == 'x')
		ret += hexa(va_arg(args, size_t), 'x');
	else if (*(str + 1) == 'u')
		ret += ft_putnbr_u(va_arg(args, unsigned int));
	else if (*(str + 1) == 'p')
		ret += ft_print_void(va_arg(args, void *));
	else
		ret += ft_putchar(*(str + 1));
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		ret;

	ret = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		while (*str != '\0' && *str != '%')
		{
			ft_putchar(*str);
			str++;
			ret++;
		}
		if (*str == '%')
		{
			ret += check_format(args, str);
			str += 2;
		}
	}
	va_end(args);
	return (ret);
}
