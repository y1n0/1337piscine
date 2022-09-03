/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:11:41 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/03 13:14:01 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	char	*str_start;

	str_start = str;
	while (*str++ != '\0')
		;
	return (str - str_start - 1);
}

/*
int	main(void)
{
	char	a[]  = "hello";
	printf("%d\n", ft_strlen(a));
}
*/
