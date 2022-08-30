#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if ( nb < 0 )
		return 0;
	if ( nb <= 1 )
		return 1;
	return nb * ft_recursive_factorial( nb - 1);

}

int main()
{
	printf("3! = %d\n", ft_recursive_factorial(3));
	printf("4! = %d\n", ft_recursive_factorial(4));

}
