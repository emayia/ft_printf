/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:22:57 by mayyildi          #+#    #+#             */
/*   Updated: 2022/04/08 19:53:51 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_memory(unsigned long long nbr, char *base, int *len)
{
	unsigned long long	base_len;

	base_len = ft_strlen(base);
	if (ft_check_base(base))
	{
		if (nbr > base_len - 1)
			ft_print_memory(nbr / base_len, base, len);
		ft_putchar(base[nbr %= base_len], len);
	}
}
