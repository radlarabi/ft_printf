/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:41:50 by rlarabi           #+#    #+#             */
/*   Updated: 2022/11/04 23:28:25 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	hexa(unsigned int l, char x);
int	ft_putnbr_u(unsigned int l);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_print_void(void *p);
int	hexa_unsigned_long(size_t l, char x);
#endif