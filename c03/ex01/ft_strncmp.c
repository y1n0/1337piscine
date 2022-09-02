/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:11:21 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/28 11:24:18 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned int	i;

	i = 0;
	while (*s1 == *s2 && *s1 != '\0' && i < n)
	{
		i++;
		s1++;
		s2++;
	}
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	return (*p1 - *p2);
}
