/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:27:00 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/03 13:27:02 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isspace(char c)
{
	if (
		c == ' ' || \
		c == '\t' || \
		c == '\n' || \
		c == '\v' || \
		c == '\f' || \
		c == '\r')
		return (1);
	return (0);
}

char	*ft_char_atoi(char *str)
{
	int		sign;
	char	*n_start;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	n_start = str;
	while (*str <= '9')
		str++;
	*str = '\0';
	if (sign == -1)
		*--n_start = '-';
	return (n_start);
}

int	ft_strlen(char *str)
{
	char	*str_start;

	str_start = str;
	while (*str++ != '\0')
		;
	return (str - str_start - 1);
}

int	ft_strnbr(char *str, int len)
{
	int	n;

	n = 0;
	while (len--)
	{
		n *= 10;
		n += (*str++ - '0');
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int		len;
	char	*str_nbr;
	int		sign;

	sign = 1;
	str_nbr = ft_char_atoi(str);
	if (*str_nbr == '-')
	{
		sign = -1;
		str_nbr++;
	}
	len = ft_strlen(str_nbr);
	return (ft_strnbr(str_nbr, len) * sign);
}

/*
int	main(void)
{
	char	a[] = " ---+---+-1234ab567";

	printf("%s\n", ft_char_atoi(a));
	printf("%d\n", ft_atoi(a));
}
*/
