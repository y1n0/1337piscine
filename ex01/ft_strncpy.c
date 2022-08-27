/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:12:59 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/26 22:12:59 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest_start;
	unsigned int		i;
	int		fill_null;

	i = 0;
	fill_null = 0;
	dest_start = dest;
	while (i++ < n)
	{
		if (*src == '\0' || fill_null == 1)
		{
			*dest = '\0';
		}
		else
		{
			*dest = *src;
		}
		src++;
		dest++;
	}
	// if we finished by filling with null, we dont add this
	if (fill_null == 0)
	{
		*dest = '\0';
	}
	return (dest_start);
}

int	main(void)
{
	char	a[6] = "hello";
	char	b[10];
	char	sa[6] = "hello";
	char	sb[10];

	ft_strncpy(b, a, 3);
	printf("a %s\n", a);
	printf("b %s\n", b);
	strncpy(sb, sa, 3);
	printf("a %s\n", sa);
	printf("b %s\n", sb);
}
