#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

int	main(void)
{
	int	*t;
	int	ret;

	t = NULL;
	ret = ft_ultimate_range(&t, 40, 52);
	if (t == NULL)
		return (1);
	while (*t)
		printf("%d \n", (*t++));
}
