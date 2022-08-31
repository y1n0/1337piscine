#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return *s1 - *s2;
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

void ft_putstrln(char *str)
{

	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	int i;
	int nok;
	char *tmp;

	nok = 1;
	while (nok == 1)
	{
		nok = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i+1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i+1];
				argv[i+1] = tmp;
				nok = 1;
			}
			i++;
		}
	}

	i = 1;
	while (i < argc)
		ft_putstrln(argv[i++]);

	return 0;
}
