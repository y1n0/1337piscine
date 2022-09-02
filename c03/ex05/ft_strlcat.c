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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_initial_l;
	unsigned int	rem_size;
	char			*src_head;

	src_head = src;
	dest_initial_l = 0;
	while (*dest != '\0')
	{
		dest_initial_l++;
		dest++;
	}
	rem_size = size - dest_initial_l - 1;
	if (size == 0 || size < dest_initial_l)
		return (dest_initial_l + size);
	while (*src != '\0')
	{
		if (rem_size-- > 0)
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	*dest = '\0';
	return (dest_initial_l + (src - src_head));
}
