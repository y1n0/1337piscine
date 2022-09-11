/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:37:51 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/11 12:37:51 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ex04/ft_stock_str.h"
#include "unistd.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 9)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else
	{
		c = (nbr % 10) + '0';
		ft_putnbr(nbr / 10);
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->str);
		write(1, "\n", 1);
		par++;
	}
}

// #define N 3
// int main(int ac, char **av)
// {
//     t_stock_str l[N];
//     for (int i = 0; i < N - 1; i++)
//     {
//         l[i].str = "hello";
//         l[i].size = 5;
//         l[i].copy = "hello";
//     }
//     l[N - 1].str = 0;
//     ft_show_tab(ft_strs_to_tab(ac, av));

// }
