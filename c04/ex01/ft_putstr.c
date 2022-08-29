
#include <unistd.h>

int ft_strlen(char *str)
{
	char * str_start;
	
	str_start = str;
	while (*str++ != '\0');
	return str - str_start - 1 ;
}

void ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int main()
{
	ft_putstr("hello");
}
