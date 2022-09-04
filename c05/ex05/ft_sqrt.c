/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:21:34 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/04 09:28:00 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	c;

	i = 1;
	c = 0;
	while (nb > 0)
	{
		nb -= i;
		i += 2;
		c++;
	}
	if (nb == 0)
		return (c);
	else
		return (0);
}

/*
int	main(void)
{
	int	v;

	v = 16;
	printf("sqrt(%d) = %d\n", v, ft_sqrt(v));
	v = 14;
	printf("sqrt(%d) = %d\n", v, ft_sqrt(v));
	v = 8;
	printf("sqrt(%d) = %d\n", v, ft_sqrt(v));
	v = 36;
	printf("sqrt(%d) = %d\n", v, ft_sqrt(v));
}
*/
