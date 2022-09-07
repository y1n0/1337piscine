#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (max - min <= 0)
		return (NULL);
	range = (int *)malloc(max - min);
	i = -1;
	while (++i < max - min)
		range[i] = min + i;
	return (range);
}

int	main(void)
{
	int	*t;

	t = ft_range(40, 200);
	if (t == NULL)
		return (1);
	while (*t)
		printf("%d\n", *t++);
}
