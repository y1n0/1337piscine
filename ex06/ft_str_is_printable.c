/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 23:35:03 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/26 23:35:03 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		if (!(32 <= c && c <= 127))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	printf("[empty] %d\n", ft_str_is_printable(""));
	printf("AAA %d\n", ft_str_is_printable("AAA"));
	printf("aaa %d\n", ft_str_is_printable("aaa"));
	printf("123 %d\n", ft_str_is_printable("123"));
	printf("aC %d\n", ft_str_is_printable("aC"));
	printf("aacc23 %d\n", ft_str_is_printable("aacc23"));
	printf("aa[\\n]cc23 %d\n", ft_str_is_printable("aa\ncc23"));
	printf("aac c23 %d\n", ft_str_is_printable("aac c23"));
	printf("aac-c23 %d\n", ft_str_is_printable("aac-c23"));
	printf("(*&*) %d\n", ft_str_is_printable("(*&*)"));
}
