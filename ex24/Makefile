# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuxu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/14 22:17:08 by yuxu              #+#    #+#              #
#    Updated: 2017/11/16 22:43:45 by yuxu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
INCLUDES = #include <libft.h>

all: $(NAME)

$(NAME):
	gcc $(INCLUDES) -c $(SRCS)
	ar rc $(NAME) *.o

clean:
	rm -fr *.o

fclean: clean
	rm -rf $(NAME)

re: clean all
