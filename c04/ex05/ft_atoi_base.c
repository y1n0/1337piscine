#include <unistd.h>
#include <stdio.h>

int ft_isspace(char c)
{
	if (
	c == ' ' ||
	c == '\t' ||
	c == '\n' ||
	c == '\v' ||
	c == '\f' ||
	c == '\r'
	)
	return 1;
	return 0;
}

int ft_dig_value(char *dig, char *base)
{
	int val;
	int found;

	val = 0;
	found = 0;
	while (*dig != *base++ && *base != '\0')
	{
		if (*dig == *base)
			found = 1;
		val++;
	}
	if (found == 1)
		return val;
	else
		return -1;

}

char *ft_char_atoi(char *str, char *base)
{
	int sign;
	char *n_start;

	// skip white spaces
	while (ft_isspace(*str))
		str++;
	// reduce signs
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if ( *str == '-')
		sign *= -1;
		str++;
	}
	n_start = str;
	// check the cur digit is a valid in this base. i.e, has a value > -1
	while ( ft_dig_value(str, base) > -1)
		str++;
	
	if (*str)
		*str = '\0';
	if (sign == -1)
	*--n_start = '-';
	return n_start;
}
int ft_strlen(char *str)
{
	char * str_start;
	
	str_start = str;
	while (*str++ != '\0');
	return str - str_start - 1 ;
}

// return the value (as int) of a number represented as str
int ft_strnbr(char *str, int len, char *base, int base_len)
{
	int n;

	n = 0;
	while (  len-- )
	{
		n *= base_len;
		//n += (*str++ - '0');
		n += ft_dig_value(str++, base);
	}
	return n;
}


int ft_atoi_base(char *str, char *base)
{
	int len;
	int base_len;
	char *str_nbr;
	//char *base_max;
	int sign;

	sign = 1;
	base_len = ft_strlen(base);
	//base_max = base + base_len - 1;
	
	str_nbr = ft_char_atoi(str, base);

	if (*str_nbr == '-')
	{
		sign = -1;
		str_nbr++;
	}
	len = ft_strlen(str_nbr);


	return ft_strnbr(str_nbr, len, base, base_len) * sign;
}

int main(){

//	char a[] = " ---+---+-1234ab567"; 
	char b[] = " ---+---+-1234xb567"; 
	char base[] = "0123456789abcdef";
	//ft_putnbr(-12345);
	printf("char_atoi %s\n", ft_char_atoi(b, base));
	printf("len %d\n", ft_strlen(base));
	printf("strnbr %d\n", ft_strnbr(b, ft_strlen(b), base, 16));
	printf("atoi_base %d\n", ft_atoi_base(b, base));
	int v1,v2, v3,v4;
	v1 = ft_dig_value("r", base);
	v2 = ft_dig_value("3", base);
	v3 = ft_dig_value("9", base);
	v4 = ft_dig_value("a", base);
	printf("dig_value: %d %d %d %d", v1, v2, v3, v4);
}

