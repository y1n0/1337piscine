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
#include <unistd.h>

int		ft_strlen(char *str);
char	*ft_itoa_base(int nb, char *base);

int	ft_dig_value(char *dig, char *base)
{
	int	val;

	val = 0;
	while (*base != '\0')
	{
		if (*dig == *base)
			return val;
		val++;
		base++;
	}
	return (-1);
}

char	*ft_char_atoi(char *str, char *base)
{
	int		sign;
	char	*n_start;

	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
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

	int_from = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(int_from, base_to));
}

int	main(int argc, char *argv[])
{
	printf("%s %s %d \n\n", argv[1], argv[2], ft_dig_value(argv[1], argv[2]) );
	if (argc == 4)
		printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	else
		printf("need args\n");
}
