#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	if ( nb < 0 )
		return 0;
	if ( nb <= 1 )
		return 1;
	return nb * ft_iterative_factorial( nb - 1);

}

int main()
{
	printf("3! = %d\n", ft_iterative_factorial(3));
	printf("4! = %d\n", ft_iterative_factorial(4));

}
