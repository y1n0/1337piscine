/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:19:56 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/04 09:21:10 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int	main(void)
{
	printf("-1: %d\n", ft_fibonacci(-1));
	printf("0: %d\n", ft_fibonacci(0));
	printf("1: %d\n", ft_fibonacci(1));
	printf("2: %d\n", ft_fibonacci(2));
	printf("3: %d\n", ft_fibonacci(3));
	printf("4: %d\n", ft_fibonacci(4));
	printf("5: %d\n", ft_fibonacci(5));
	printf("6: %d\n", ft_fibonacci(6));
}
