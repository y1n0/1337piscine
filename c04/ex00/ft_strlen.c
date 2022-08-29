#include <stdio.h>

int ft_strlen(char *str)
{
	char * str_start;
	
	str_start = str;
	while (*str++ != '\0');
	return str - str_start - 1 ;
}

int main()
{

	char a[] = "hello";
	printf("%d\n", ft_strlen(a));
}
