
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// ft_itoa_base

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

int	ft_pow(int base, int exponent)
{
	int	res;

	res = base;
	while (exponent > 1)
	{
		res *= base;
		exponent--;
	}
	return (res);
}


void	ft_putnbr_unsigned(char *dest, unsigned int nb, char *base)
{
	unsigned int	base_n;
	int position;
	unsigned int ldig;

	base_n = (unsigned)ft_strlen(base);

	while ( nb >= 0 )
	{
		printf("%d\n", nb); 
		ldig = nb;
		position = 0;
		while (ldig >= base_n)
		{
			ldig = ldig / base_n;
			position++;
		}
			

		if (nb < base_n)
		{
			nb = nb - ldig * ft_pow(base_n, position);
			*dest++ = base[ldig];
			break;
		}
		nb = nb - ldig * ft_pow(base_n, position);
		*dest++ = base[ldig];
	}
			*dest++ = '\0';
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


int ft_intlen_base(int nb, int base_len)
{
	int i;

	i = 1;
	while (0 != (nb /= base_len))
		i++;
	return (i);
}

char	*ft_itoa_base(int nb, char *base)
{
	unsigned int	unb;
	char *ret;
	int siz;

	siz = ft_intlen_base(nb, ft_strlen(base));

	ret = (char *) malloc(siz + 2);
	if (ft_validate(base) == 0)
		return NULL;
	if (nb < 0)
	{
		*ret++ = '-';
		unb = (unsigned int)-nb;
	}
	else
		unb = (unsigned int)nb;

	ft_putnbr_unsigned(ret, unb, base);
	printf("==%s==\n", ret);
	return ret;
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
	//ft_putnbr_base(-2147483648, "0123456789abcdef");
	//ft_putnbr_base(2147483647, "0123456789abcdef");
	//ft_putnbr_base(-2147483648, "0123456789");
	//ft_putnbr_base(2147483647, "0123456789");
	int d;
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
