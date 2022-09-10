/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:27:43 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/10 12:27:43 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i++])
		;
	dest = (char *)malloc(i);
	if (dest == NULL)
		return (NULL);
	while (i-- > 0)
		dest[i] = src[i];
	return (dest);
}

int	main(void)
{
	printf("hello: %s\n", strdup("hello"));
	printf("hello: %s\n", ft_strdup("hello"));
}
