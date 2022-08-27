/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 23:31:49 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/26 23:31:49 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		if (!('a' <= c && c <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	printf("[empty] %d\n", ft_str_is_lowercase(""));
	printf("AAA %d\n", ft_str_is_lowercase("AAA"));
	printf("aaa %d\n", ft_str_is_lowercase("aaa"));
	printf("123 %d\n", ft_str_is_lowercase("123"));
	printf("aC %d\n", ft_str_is_lowercase("aC"));
	printf("aacc23 %d\n", ft_str_is_lowercase("aacc23"));
	printf("aac c23 %d\n", ft_str_is_lowercase("aac c23"));
	printf("aac-c23 %d\n", ft_str_is_lowercase("aac-c23"));
	printf("(*&*) %d\n", ft_str_is_lowercase("(*&*)"));
}