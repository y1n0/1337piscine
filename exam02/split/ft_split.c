#include <stdio.h>
#include <stdlib.h>

void	ft_strcpy(char *dest, char *src, int start, int count)
{
	int	i;

	i = -1;
	while (++i < count)
		dest[i] = src[i + start];
	dest[++i] = '\0';
}

char	**ft_split(char *str)
{
	int		count;
	int		count2;
	int		i;
	int		j;
	int		last_i;
	char	**ret;

	i = -1;
	count = 0;
	while (str[++i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			count++;
	}
	count += 1;
	printf("word count: %d\n", count);
	ret = (char **)malloc(sizeof(char *) * count );
	i = -1;
	j = -1;
	count2 = 0;
	last_i = 0;
	while (str[++i] || j < count - 1)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
		{
			ret[++j] = malloc(sizeof(char) * count2);
			ft_strcpy(ret[j], str, last_i, count2);
			printf("j: %d last %d count %d\n", j, last_i, count2);
			last_i += count2 + 1;
			count2 = 0;
		}
		else
			count2++;
	}
	return (ret);
}

int	main(int argc, char **argv)
{
	char	**a;
	int		i;

	if (argc != 2)
		return (1);
	
	i = 0;
	while (i < argc)
	{
		printf("%p\n", argv[i]);
		i++;
	}

	a = ft_split(argv[1]);
	i = -1;
	while (a[++i])
	printf("%d: %p\n", i, a[i]);
		//printf("%d: %s\n", i, a[i]);
}
