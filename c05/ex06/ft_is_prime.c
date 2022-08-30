#include <stdio.h>

int ft_is_prime(int nb)
{
    if (nb == 2 || nb == 3)
        return 1;

    if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
        return 0;

    for (int i = 5; i * i <= nb; i += 6)
    {
        if (nb % i == 0 || nb % (i + 2) == 0)
            return 0;
    }

    return 1;
}

int main()
{

	int v;
	v = 10; printf("%d : %d\n", v, ft_is_prime(v));
	v = 17; printf("%d : %d\n", v, ft_is_prime(v));
	v = 18; printf("%d : %d\n", v, ft_is_prime(v));
	v = 19; printf("%d : %d\n", v, ft_is_prime(v));
	v = 23; printf("%d : %d\n", v, ft_is_prime(v));
	v = 323; printf("%d : %d\n", v, ft_is_prime(v));

}
