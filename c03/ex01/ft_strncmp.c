/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:11:21 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/04 10:06:02 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (n == 0)
		return (0);
	while (n-- > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if (n > 0 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
	}
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	return (*p1 - *p2);
}
