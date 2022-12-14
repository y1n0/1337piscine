/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:09:32 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/04 09:12:24 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power < 0)
		return (0);
	while (power-- > 0)
		ret *= nb;
	return (ret);
}

/*
int	main(void)
{
	printf("3^3 = %d\n", ft_iterative_power(3, 3));
	printf("2^3 = %d\n", ft_iterative_power(2, 3));
	printf("0^0 = %d\n", ft_iterative_power(0, 0));
	printf("3^0 = %d\n", ft_iterative_power(3, 0));
	printf("3^-2 = %d\n", ft_iterative_power(3, -2));
}
*/
