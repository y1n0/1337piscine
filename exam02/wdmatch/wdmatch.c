#include <unistd.h>

void ft_putstr(char *str)
{

	while (*str)
	{
		write(1, str++, 1);
	}
}

int	ft_wdmatch(char *str1, char *str2)
{
	int yes;

	yes = 0;
	while (*str2 && *str1)
	{
		if (*str1 == *str2)
		{
			str1++;
		}
		str2++;
	}
	if (*str1 == '\0')
		return 1;
	else
		return 0;
}


int main(int argc, char **argv)
{
	if (argc == 3)
		if (ft_wdmatch(argv[1], argv[2]))
			ft_putstr(argv[1]);

	write(1, "\n", 1);
	return 0;
}
