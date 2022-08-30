#include <stdio.h>


int ft_sqrt(int nb)
{
	int i;
	int c;

	i = 1;
	c = 0;
	while ( nb > 0 )
	{
		nb -= i;
		i += 2;
		c++;
	}
	if ( nb == 0 )
		return c;
	else
		return 0;
}

int main()
{
	int v;
	v = 16; printf("sqrt(%d) = %d\n", v, ft_sqrt(v));
	v = 14; printf("sqrt(%d) = %d\n", v, ft_sqrt(v));
	v = 8; printf("sqrt(%d) = %d\n", v, ft_sqrt(v));
	v = 36; printf("sqrt(%d) = %d\n", v, ft_sqrt(v));
}
