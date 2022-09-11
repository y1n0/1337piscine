/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:56:36 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/10 19:57:13 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i++])
		;
	dest = (char *)malloc(i);
	if (dest == NULL)
		return (NULL);
	while (i-- > 0)
		dest[i] = src[i];
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*list;

	list = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	i = -1;
	while (++i < ac)
	{
		list[i].size = ft_strlen(av[i]);
		list[i].str = av[i];
		list[i].copy = ft_strdup(av[i]);
	}
	list[i].str = 0;
	return (list);
}

// int	main(int argc, char **argv)
// {
// 	ft_strs_to_tab(argc, argv);
// 	return (0);
// }
