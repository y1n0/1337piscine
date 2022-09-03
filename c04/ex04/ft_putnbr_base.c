/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:27:29 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/03 20:27:31 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strstr(char *haystack, char needle, int end)
{
	int	i;

	i = -1;
	while (++i < end)
		if (haystack[i] == needle)
			return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	char	*str_start;

	str_start = str;
	while (*str++ != '\0')
		;
	return (str - str_start - 1);
}

void	ft_putnbr_unsigned(unsigned int nb, char *base)
{
	char			c;
	unsigned int	base_n;

	base_n = (unsigned)ft_strlen(base);
	if (nb < base_n)
	{
		c = base[nb];
		write(1, &c, 1);
	}
	else
	{
		c = base[nb % base_n];
		ft_putnbr_unsigned(nb / base_n, base);
		write(1, &c, 1);
	}
}

int	ft_validate(char *base)
{
	int	i;

	if (*base == '\0')
		return (0);
	i = -1;
	while (base[++i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (ft_strstr(base, base[i], i) == 1)
			return (0);
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr(int nb, char *base)
{
	unsigned int	unb;

	if (ft_validate(base) == 0)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		unb = (unsigned int)-nb;
	}
	else
		unb = (unsigned int)nb;
	ft_putnbr_unsigned(unb, base);
}

/*
int	main(void)
{
	// ft_putnbr(16, "012345");
	// write(1, "\n", 1);
	// ft_putnbr(-16, "0123");
	// write(1, "\n", 1);
	// printf("hay %d", ft_strstr("helo", 'e', 3));
	// printf("hay %d", ft_strstr("helo", 'x', 3));
	ft_putnbr(-2147483648, "0123456789abcdef");
	ft_putnbr(2147483647, "0123456789abcdef");
	ft_putnbr(-2147483648, "0123456789");
	ft_putnbr(2147483647, "0123456789");
}
*/
