/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:15:41 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/09 10:36:10 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		siz;
	int		sep_siz;
	int		i;

	sep_siz = ft_strlen(sep);
	i = -1;
	siz = 0;
	while (++i < size)
		siz += ft_strlen(strs[i]);
	siz += sep_siz * (size - 1);
	ret = (char *)malloc(siz + 1);
	i = -1;
	while (++i < size)
	{
		while (*strs[i])
			*ret++ = *strs[i]++;
		while (*sep && i != size - 1)
			*ret++ = *sep++;
		sep = sep - sep_siz;
	}
	*ret = '\0';
	return (ret - siz);
}

/*
int	main(int argc, char *argv[])
{
	char	*joined;

	{
		joined = ft_strjoin(argc, argv, "||");
		printf("argc: %d sep: %s result:\n%s\n", argc, "||", joined);
	}
}
*/
