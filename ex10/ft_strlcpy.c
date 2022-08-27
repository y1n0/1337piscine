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
	int				flag_term;

	flag_term = 0;
	i = 0;
	while (*src)
	{
		if (*src == '\0')
			flag_term = 1;
		if (i + 1 < size && flag_term == 0)
		{
			*dest = *src;
			dest++;
		}
		src++;
		i++;
	}
	if (size != 0)
	*dest = '\0';
	return (i);
}
