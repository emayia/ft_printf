/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:21:34 by mayyildi          #+#    #+#             */
/*   Updated: 2022/04/08 20:00:35 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nb, int *len)
{
	if (nb > 9)
		ft_putnbr(nb / 10, len);
	ft_putchar(nb % 10 + 48, len);
}
