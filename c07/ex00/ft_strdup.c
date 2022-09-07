#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i++])
		;
	dest = (char *)malloc(i);
	if (dest == NULL)
		return (NULL);
	while (i-- > 0)
		dest[i] = src[i];
	return (dest);
}

int	main(void)
{
	printf("hello: %s\n", strdup("hello"));
	printf("hello: %s\n", ft_strdup("hello"));
}
