/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:38:48 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/09 20:38:48 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	char	*str_start;

	str_start = str;
	while (*str++ != '\0')
		;
	return (str - str_start - 1);
}

char	*ft_putnbr_unsigned(char *dest, unsigned int nb, char *base, int nb_len)
{
	int				i;
	unsigned int	base_len;

	base_len = ft_strlen(base);
	dest += nb_len + 1;
	*(--dest) = '\0';
	i = -1;
	while (++i < nb_len)
	{
		*(--dest) = base[nb % base_len];
		nb = nb / base_len;
	}
	return (dest);
}

int	ft_validate(char *base)
{
	int	i;
	int	j;

	if (*base == '\0')
		return (0);
	i = -1;
	while (base[++i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = -1;
		while (++j < i)
			if (base[j] == base[i])
				return (0);
	}
	if (i < 2)
		return (0);
	return (1);
}

int	ft_intlen_base(int nb, int base_len)
{
	int	i;

	i = 1;
	nb /= base_len;
	while (0 != nb)
	{
		i++;
		nb /= base_len;
	}
	return (i);
}

char	*ft_itoa_base(int nb, char *base)
{
	unsigned int	unb;
	char			*ret;
	int				siz;

	if (ft_validate(base) == 0)
		return (NULL);
	siz = ft_intlen_base(nb, ft_strlen(base));
	ret = (char *)malloc(siz + 2);
	if (nb < 0)
	{
		*ret++ = '-';
		unb = (unsigned int)-nb;
		return (ft_putnbr_unsigned(ret, unb, base, siz) - 1);
	}
	else
	{
		unb = (unsigned int)nb;
		return (ft_putnbr_unsigned(ret, unb, base, siz));
	}
}
