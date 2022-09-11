# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 18:27:02 by moel-idr          #+#    #+#              #
#    Updated: 2022/09/12 00:45:53 by moel-idr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# !!CHECK GIT HISTRY
_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
FILES = $(_FILES:%=srcs/%)
GCCFLAGS = -Wall -Wextra -Werror -Iincludes
OBJECTS = $(FILES:%.c=%.o)
NAME = libft.s

all: NAME

$(NAME): $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)

%.o: %.c
	gcc $(GCCFLAGS) -c $< -o $@

clean:
	rm -f $(OBEJCTS)

fclean: clean
	rm -f $(NAME)

re: fclean all


