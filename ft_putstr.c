/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:20:49 by mayyildi          #+#    #+#             */
/*   Updated: 2022/04/08 20:02:05 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	if (!str)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	else
	{
		while (*str)
		{
			ft_putchar(*str, len);
			str++;
		}
	}
}
