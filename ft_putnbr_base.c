/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:22:39 by mayyildi          #+#    #+#             */
/*   Updated: 2022/04/08 16:07:35 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nbr, char *base, int *len)
{
	int			base_len;
	long int	n;

	n = nbr;
	base_len = ft_strlen(base);
	if (ft_check_base(base))
	{
		if (n < 0)
		{
			ft_putchar('-', len);
			n = -n;
		}
		if (n > base_len - 1)
			ft_putnbr_base(n / base_len, base, len);
		ft_putchar(base[n %= base_len], len);
	}
}
