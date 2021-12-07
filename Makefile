# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 23:29:48 by amrakibe          #+#    #+#              #
#    Updated: 2021/12/07 00:03:10 by amrakibe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INC = ft_printf.h
AR := ar rc
FLAGS = -Wall -Wextra -Werror
REMOVE := rm -rf
SRCS = 	ft_printf.c \
		ft_putchar.c \
		ft_putnbr_base.c \
		ft_putnbr_unsigned.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_strlen.c \
	   
OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INC)
	$(AR) $@ $<
%.o:%.c 
	cc $(FLAGS) -c $< -o $@


clean:
	$(REMOVE) $(OBJS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all
