/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 23:27:01 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/26 23:27:01 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		if (!('0' <= c && c <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	printf("[empty] %d\n", ft_str_is_numeric(""));
	printf("AAA %d\n", ft_str_is_numeric("AAA"));
	printf("aaa %d\n", ft_str_is_numeric("aaa"));
	printf("123 %d\n", ft_str_is_numeric("123"));
	printf("aC %d\n", ft_str_is_numeric("aC"));
	printf("aacc23 %d\n", ft_str_is_numeric("aacc23"));
	printf("aac c23 %d\n", ft_str_is_numeric("aac c23"));
	printf("aac-c23 %d\n", ft_str_is_numeric("aac-c23"));
	printf("(*&*) %d\n", ft_str_is_numeric("(*&*)"));
}
