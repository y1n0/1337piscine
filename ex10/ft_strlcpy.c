/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:43:35 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/27 11:43:35 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*src != '\0')
	{
		if (i < size - 1)
		{
			*dest = *src;
			dest++;
		}
		src++;
		i++;
	}
	*dest = '\0';
	return (i);
}

int	main(void)
{
	int				isize = 45;
	char			a[18] = "12345";
	char			b[isize];
	char			c[isize];
	unsigned int	ret;
	unsigned int	cret;

	ret = ft_strlcpy(b, a, isize);
	cret = strlcpy(c, a, isize);

	printf("     input \t output \t size \t ret \n");
	printf("imp: %s \t %s \t %d \t %d \n", a, b, isize, ret);
	printf("com: %s \t %s \t %d \t %d \n", a, c, isize, cret);
}
