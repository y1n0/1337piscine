/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 21:52:41 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/26 21:52:41 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}

int	main(void)
{
	char a[10] = "hello";

	char b[10];

	char sa[20] = "heeeey\n";
	char sb[20];

	ft_strcpy(b, a);
	printf("a %s\n", a);
	printf("b %s\n", b);

	strcpy(sb, sa);

	printf("a %s\n", sa);
	printf("b %s\n", sb);
}