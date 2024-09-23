# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 20:26:27 by mayyildi          #+#    #+#              #
#    Updated: 2022/04/07 20:46:34 by mayyildi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =		ft_check_base.c		\
			ft_print_memory.c	\
			ft_print_percent.c	\
			ft_printf.c			\
			ft_putchar.c		\
			ft_putnbr_base.c	\
			ft_putnbr_u.c		\
			ft_putnbr.c			\
			ft_putstr.c			\
			ft_strlen.c			\
		
OBJ = *.o

INC = ft_printf.h

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

all: $(NAME)

$(NAME):
	@echo "\033[32mCreating library...\033[0m"
	@$(CC) $(CFLAGS) -c $(SRCS) -I $(INC)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@echo "\033[33mCleaning objects...\033[0m"
	@/bin/rm -rf $(OBJ)

fclean: clean
	@echo "\033[33mCleaning objects and library...\033[0m"
	@/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test