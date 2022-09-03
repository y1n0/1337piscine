/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:30:01 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/03 20:30:02 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_dig_value(char *dig, char *base)
{
	int	val;
	int	found;

	val = 0;
	found = 0;
	while (*dig != *base++ && *base != '\0')
	{
		if (*dig == *base)
			found = 1;
		val++;
	}
	if (found == 1)
		return (val);
	else
		return (-1);
}

char	*ft_char_atoi(char *str, char *base)
{
	int		sign;
	char	*n_start;

	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	n_start = str;
	while (ft_dig_value(str, base) > -1)
		str++;
	if (*str)
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

int	ft_strnbr(char *str, int len, char *base, int base_len)
{
	int	n;

	n = 0;
	while (len--)
	{
		n *= base_len;
		n += ft_dig_value(str++, base);
	}
	return (n);
}

int	ft_atoi_base(char *str, char *base)
{
	int		len;
	int		base_len;
	char	*str_nbr;
	int		sign;

	sign = 1;
	base_len = ft_strlen(base);
	str_nbr = ft_char_atoi(str, base);
	if (*str_nbr == '-')
	{
		sign = -1;
		str_nbr++;
	}
	len = ft_strlen(str_nbr);
	return (ft_strnbr(str_nbr, len, base, base_len) * sign);
}

/*
int main(){

//	char a[] = " ---+---+-1234ab567"; 
	char b[] = " ---+---+-a1234xb567"; 
	char base[] = "0123456789abcdef";
	//ft_putnbr(-12345);
	printf("char_atoi %s\n", ft_char_atoi(b, base));
	// printf("len %d\n", ft_strlen(base));
	// printf("strnbr %d\n", ft_strnbr(b, ft_strlen(b), base, 16));
	printf("atoi_base %d\n", ft_atoi_base(b, base));
	// int v1,v2, v3,v4;
	// v1 = ft_dig_value("r", base);
	// v2 = ft_dig_value("3", base);
	// v3 = ft_dig_value("9", base);
	// v4 = ft_dig_value("a", base);
	// printf("dig_value: %d %d %d %d", v1, v2, v3, v4);
}
*/
