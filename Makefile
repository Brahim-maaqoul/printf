# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 14:15:13 by bmaaqoul          #+#    #+#              #
#    Updated: 2021/12/11 12:08:10 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
HDR = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
HDR = ft_printf.h
SRCS = ft_convert.c ft_printf.c ft_put_hex.c ft_put_uphex.c ft_putchar.c \
		ft_putnbr_u.c ft_putnbr.c ft_putp.c ft_putstr.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(HDR)
	$(AR) $(NAME) $(OBJS)

$(OBJS): $(SRCS) $(HDR)
	$(CC) $(CFLAGS) -c $(SRCS) $(HDR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
