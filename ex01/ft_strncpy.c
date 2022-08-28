/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:12:59 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/28 16:13:48 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*dest_origin;

	i = 0;
	dest_origin = dest;
	while (i++ < n)
	{
		if (*src)
			*dest = *src;
		else
			*dest = '\0';
		src++;
		dest++;
	}
	return (dest_origin);
}
