/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 23:33:12 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/26 23:33:12 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		if (!('A' <= c && c <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	printf("[empty] %d\n", ft_str_is_uppercase(""));
	printf("AAA %d\n", ft_str_is_uppercase("AAA"));
	printf("aaa %d\n", ft_str_is_uppercase("aaa"));
	printf("123 %d\n", ft_str_is_uppercase("123"));
	printf("aC %d\n", ft_str_is_uppercase("aC"));
	printf("aacc23 %d\n", ft_str_is_uppercase("aacc23"));
	printf("aac c23 %d\n", ft_str_is_uppercase("aac c23"));
	printf("aac-c23 %d\n", ft_str_is_uppercase("aac-c23"));
	printf("(*&*) %d\n", ft_str_is_uppercase("(*&*)"));
}
