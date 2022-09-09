#include <stdio.h>


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

int	ft_strlen(char *str);
/*
{
	char	*str_start;

	str_start = str;
	while (*str++ != '\0')
		;
	return (str - str_start - 1);
}
*/

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


char    *ft_itoa_base(int nb, char *base);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int int_from;

	int_from = ft_atoi_base(nbr, base_from);
	
	return ft_itoa_base(int_from, base_to);
}


int main(int argc, char *argv[])
{
	if (argc != 4)
		printf("need args\n");
	printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
}
