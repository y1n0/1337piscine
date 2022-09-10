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

char *ft_putnbr_unsigned(char *dest, unsigned int nb, char *base, int nb_len)
{
    int i;
    unsigned int base_len;
    base_len = ft_strlen(base);
    dest += nb_len + 1;
    *(--dest) = '\0';
    i = -1;
    while ( ++i < nb_len )
    {
        *(--dest) = base[nb % base_len];
        nb = nb / base_len;
    }
    return dest;
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

int	ft_intlen_base(int nb, int base_len)
{
	int	i;

	i = 1;
	while (0 != (nb /= base_len))
		i++;
	return (i);
}

char	*ft_itoa_base(int nb, char *base)
{
	unsigned int	unb;
	char			*ret;
	int				siz;

	siz = ft_intlen_base(nb, ft_strlen(base));
	ret = (char *)malloc(siz + 2);
	if (ft_validate(base) == 0)
		return (NULL);
	if (nb < 0)
	{
		*ret++ = '-';
		unb = (unsigned int)-nb;
	}
	else
		unb = (unsigned int)nb;
	return ft_putnbr_unsigned(ret, unb, base, siz);
}

/*
int	main(void)
{
	int	d;

	// ft_putnbr(16, "012345");
	// write(1, "\n", 1);
	// ft_putnbr(-16, "0123");
	// write(1, "\n", 1);
	// printf("hay %d", ft_strstr("helo", 'e', 3));
	// printf("hay %d", ft_strstr("helo", 'x', 3));
	//ft_putnbr_base(-2147483648, "0123456789abcdef");
	//ft_putnbr_base(2147483647, "0123456789abcdef");
	//ft_putnbr_base(-2147483648, "0123456789");
	//ft_putnbr_base(2147483647, "0123456789");
	char *s1, *s2;
	d = 237433999; s1 = ft_itoa_base(d, "0123456789");
	d = 0x238ad9; s2 = ft_itoa_base(d, "0123456789abcdef");
	printf("number %d digits %s\n", d, s1);
	printf("number %d digits %s\n", d, s2);
	//int a = 123456;
	//char b[20];
	//ft_putnbr_unsigned(b, (unsigned int) a, "0123456789abcdef");
	//printf("%d : %s\n", a, b);
}
*/
