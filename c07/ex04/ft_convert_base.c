/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:35:44 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/09 20:35:44 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str);
char	*ft_itoa_base(int nb, char *base);
int		ft_validate(char *base);

int	ft_dig_value(char *dig, char *base)
{
	int	val;

	val = 0;
	while (*base != '\0')
	{
		if (*dig == *base)
			return (val);
		val++;
		base++;
	}
	return (-1);
}

char	*ft_char_atoi(char *str, char *base)
{
	int		sign;
	char	*ret;
	char	*r_start;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	r_start = ret;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	if (sign == -1)
		*ret++ = '-';
	while (ft_dig_value(str, base) > -1)
		*ret++ = *str++;
	*ret = '\0';
	return (r_start);
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	int_from;

	if (ft_validate(base_to) == 0 || ft_validate(base_from) == 0)
		return (NULL);
	int_from = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(int_from, base_to));
}
