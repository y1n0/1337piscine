/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:35:26 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/28 16:56:56 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
		str++;
	return (str - start);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_l;
	unsigned int	src_l;
	unsigned int	rem_size;

	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	rem_size = size - dest_l - 1;
	if (rem_size == 0)
		return (src_l + dest_l);
	if (size == 0 || size < dest_l)
		return (src_l + size);
	dest = dest + dest_l;
	while (*src != '\0' && rem_size-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_l + src_l);
}
