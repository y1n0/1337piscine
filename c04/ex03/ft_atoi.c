/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:27:00 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/09 10:49:26 by moel-idr         ###   ########.fr       */
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
	while (*str && *str <= '9')
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

unsigned int	ft_strnbr(char *str, int len)
{
	unsigned int	n;

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
	return (signed int)(ft_strnbr(str_nbr, len) * sign);
}

/*
int	main(void)
{
	// char	a[] = " ---+---+-1234ab567";

	// printf("%s\n", ft_char_atoi(a));
	// printf("%d\n", a, ft_atoi(a));

	{
		char a[] = "0";
		int i = ft_atoi(a);
		printf("%s: %d\n", a, i);
	}
	{
		char a[] = "15";
		int i = ft_atoi(a);
		printf("%s: %d\n", a, i);
	}
	{
		char a[] = "-25";
		int i = ft_atoi(a);
		printf("%s: %d\n", a, i);
	}
	{
		char a[] = "12345";
		int i = ft_atoi(a);
		printf("%s: %d\n", a, i);
	}
	{
		char a[] = "987654321";
		int i = ft_atoi(a);
		printf("%s: %d\n", a, i);
	}
	{
		char a[] = "-34567";
		int i = ft_atoi(a);
		printf("%s: %d\n", a, i);
	}
	{
		char a[] = "2147483647";
		int i = ft_atoi(a);
		printf("%s: %d\n", a, i);
	}
	{
		char a[] = "-2147483647";
		int i = ft_atoi(a);
		printf("%s: %d\n", a, i);
	}
	{
		char a[] = "-2147483648";
		int i = ft_atoi(a);
		printf("%s: %d\n", a, i);
	}
	{
		char a[] = "-2147483649";
		int i = ft_atoi(a);
		printf("%s: %d\n", a, i);
	}
	{
		char a[] = " +-21455";
		int i = ft_atoi(a);
		(void) i;
		printf("%s: %d\n", a, i);
	}

	return 0;
}
*/
