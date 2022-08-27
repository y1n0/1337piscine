/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:19:12 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/27 11:19:12 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*orig_str;

	orig_str = str;
	while (*str)
	{
		if ('A' <= *str && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (orig_str);
}

int	main(void)
{
	char a[] = "Hell You helo";
	char *b;
	b = ft_strlowcase(a);
	printf("Hell You helo: %s", b);
}
