# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 18:10:34 by moel-idr          #+#    #+#              #
#    Updated: 2022/09/11 18:24:44 by moel-idr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

FILES="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
rm -f libft.a
gcc -c $FILES
ar cr libft.a $FILES
rm *.o
