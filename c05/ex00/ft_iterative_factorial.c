/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:54:02 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/04 08:54:04 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ret;

	if (nb < 0)
		return (0);
	ret = 1;
	while (nb > 1)
		ret *= nb--;
	return (ret);
}

/*
int	main(void)
{
	printf("3! = %d\n", ft_iterative_factorial(3));
	printf("4! = %d\n", ft_iterative_factorial(4));
}
*/
