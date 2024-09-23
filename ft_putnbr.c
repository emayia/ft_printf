/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:21:17 by mayyildi          #+#    #+#             */
/*   Updated: 2022/04/08 19:59:29 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *len)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-', len);
		n *= (-1);
	}
	if (n > 9)
		ft_putnbr(n / 10, len);
	ft_putchar(n % 10 + 48, len);
}
