/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:08:25 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/04 09:08:31 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, --power));
}

/*
int	main(void)
{
	printf("3^3 = %d\n", ft_recursive_power(3, 3));
	printf("2^3 = %d\n", ft_recursive_power(2, 3));
	printf("0^0 = %d\n", ft_recursive_power(0, 0));
	printf("3^0 = %d\n", ft_recursive_power(3, 0));
	printf("3^-2 = %d\n", ft_recursive_power(3, -2));
}
*/
