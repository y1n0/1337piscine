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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest_start;
	unsigned int	i;
	int				fill_null;

	i = 0;
	fill_null = 0;
	dest_start = dest;
	while (i++ < n)
	{
		if (*src == '\0' || fill_null == 1)
			*dest = '\0';
		else
			*dest = *src;
		src++;
		dest++;
	}
	if (fill_null == 0)
		*dest = '\0';
	return (dest_start);
}
