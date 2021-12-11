# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 23:29:48 by amrakibe          #+#    #+#              #
#    Updated: 2021/12/10 22:42:54 by amrakibe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
PRINTF = ft_printf.h
FLAGS = -Wall -Wextra -Werror
SRCS = 	ft_printf.c \
		ft_putchar.c \
		ft_putnbr_base.c \
		ft_putnbr_unsigned.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_ptr_base.c \
		ft_putnbr_base_ptr.c \
	   
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS) $(PRINTF)
		ar rc $(NAME) $(OBJS)

%.o:%.c
	cc $(FLAGS) -c $< -o $@

all: $(NAME)
clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re 
