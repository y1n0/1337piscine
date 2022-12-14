/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:21:35 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/11 18:22:07 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*p1;
	unsigned char	*p2;

	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	return (*p1 - *p2);
}
