/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 23:03:50 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/26 23:03:50 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define UPPER_START 65
#define UPPER_END 90
#define LOWER_START 97
#define LOWER_END 122

int	ft_str_is_alpha(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		// if (!(65 <= *str && *str <= 90 && 97 <= *str && *str <= 122))
		if (!(('a' <= c && 'a' <= 'z') || ('A' <= c && c <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	printf("[empty] %d\n", ft_str_is_alpha(""));
	printf("AAA %d\n", ft_str_is_alpha("AAA"));
	printf("aaa %d\n", ft_str_is_alpha("aaa"));
	printf("123 %d\n", ft_str_is_alpha("123"));
	printf("aC %d\n", ft_str_is_alpha("aC"));
	printf("aacc23 %d\n", ft_str_is_alpha("aacc23"));
	printf("aac c23 %d\n", ft_str_is_alpha("aac c23"));
	printf("aac-c23 %d\n", ft_str_is_alpha("aac-c23"));
	printf("(*&*) %d\n", ft_str_is_alpha("(*&*)"));
}