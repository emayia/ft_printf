/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:26:01 by mayyildi          #+#    #+#             */
/*   Updated: 2022/04/08 20:03:30 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_formats(va_list args, const char format, int *len)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (format == 'p')
	{
		ft_putstr("0x", len);
		ft_print_memory(va_arg(args, unsigned long long),
			"0123456789abcdef", len);
	}
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), len);
	else if (format == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", len);
	else if (format == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", len);
	else if (format == '%')
		ft_print_percent(len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_formats(args, str[i + 1], &len);
			i++;
		}
		else
			ft_putchar(str[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
