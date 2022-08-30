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

int ft_find_next_prime(int nb)
{
	if (nb % 2 == 0 && ft_is_prime(nb) == 0)
		nb++;
	while (ft_is_prime(nb) == 0)
		nb++;

	return nb;
}

int main()
{
	int v;
	v = 1; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 2; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 4; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 9; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 23; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 100; printf("%d: %d\n", v, ft_find_next_prime(v));
	v = 244523523; printf("%d: %d\n", v, ft_find_next_prime(v));
}
