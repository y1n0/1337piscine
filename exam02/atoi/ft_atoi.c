#include <stdio.h>

int     ft_atoi(const char *str)
{
	int n;
	int p;
	int sign;

	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	p = 1;
	n = 0;
	while (*str)
	{
		if (!( '0' <= *str && *str <= '9' ))
			return 0;

		printf("n: %d p %d c %c\n", n, p, *str);
		n = n * 10 + (*str - '0');
		str++;
	}
	return n * sign;
}


int main()
{


	printf("%d\n", ft_atoi("-1234569"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));

}
