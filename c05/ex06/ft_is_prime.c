/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:35:50 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/04 09:40:43 by moel-idr         ###   ########.fr       */
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

/*
int	main(void)
{
	int	v;

	v = 10; printf("%d : %d\n", v, ft_is_prime(v));
	v = 17; printf("%d : %d\n", v, ft_is_prime(v));
	v = 18; printf("%d : %d\n", v, ft_is_prime(v));
	v = 19; printf("%d : %d\n", v, ft_is_prime(v));
	v = 23; printf("%d : %d\n", v, ft_is_prime(v));
	v = 323; printf("%d : %d\n", v, ft_is_prime(v));
}
*/
