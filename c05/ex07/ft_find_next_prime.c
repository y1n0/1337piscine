/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:41:19 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/04 10:28:57 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (nb > 3 && nb % 2 == 0 && ft_is_prime(nb) == 0)
		nb++;
	while (ft_is_prime(nb) == 0)
		nb += 2;
	return (nb);
}

/*
int	main(void)
{
	int	v;

	v = -1; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 0; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 1; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 2; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 3; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 4; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 5; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 6; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 7; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 8; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 9; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 10; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 11; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 23; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 100; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 244523523; printf("%d: %d\n", v, ft_find_next_prime(v));
}
*/
