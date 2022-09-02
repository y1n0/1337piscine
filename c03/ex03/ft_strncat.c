/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:42:44 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/28 12:47:40 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*head;
	unsigned int	i;

	head = dest;
	i = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < nb)
	{
		i++;
		*dest++ = *src++;
	}
	*dest++ = '\0';
	return (head);
}
