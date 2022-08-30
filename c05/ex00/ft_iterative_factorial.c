
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int ret;
	if (nb < 0)
		return 0;
	ret = 1;
	while ( nb > 1 )
	{
		ret *= nb--;
	}
	return ret;
}

int main()
{
	printf("3! = %d\n", ft_iterative_factorial(3));
	printf("4! = %d\n", ft_iterative_factorial(4));

}

