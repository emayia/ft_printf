/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:23:19 by mayyildi          #+#    #+#             */
/*   Updated: 2022/04/08 20:05:13 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/*      Main functions          */
int		ft_printf(const char *str, ...);
void	ft_formats(va_list args, const char format, int *len);

/*      Support functions       */
int		ft_check_base(char *base);
void	ft_print_memory(unsigned long long nbr, char *base, int *len);
void	ft_print_percent(int *len);
void	ft_putchar(int c, int *len);
void	ft_putnbr_base(unsigned int nbr, char *base, int *len);
void	ft_putnbr_u(unsigned int nb, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_putstr(char *str, int *len);
int		ft_strlen(char *str);

#endif
