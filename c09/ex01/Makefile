# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 18:27:02 by moel-idr          #+#    #+#              #
#    Updated: 2022/09/11 19:04:37 by moel-idr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
FILES = $(_FILES:%=srcs/%)
GCCFLAGS = -Wall -Wextra -Werror -Iincludes

all: libft.a

libft.a: $(FILES:%.c=%.o)
	ar cr ../libft.a $(FILES:%.c=%.o)

%.o: %.c
	gcc $(GCCFLAGS) -c $< -o $@

clean:
	rm -f $(FILES:%.c=%.o)

fclean: clean
	rm -f libft.a

re: fclean all


