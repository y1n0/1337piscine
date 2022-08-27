/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 23:46:12 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/26 23:46:12 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*orig_str;

	orig_str = str;
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (orig_str);
}

int	main(void)
{
	char a[] = "hell Y\nou helo";
	char *b;
	b = ft_strupcase(a);
	printf("%s: %s", a, b);
}
