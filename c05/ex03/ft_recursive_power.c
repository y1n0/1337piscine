:x

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	return nb * ft_recursive_power(nb, --power);
}

int main()
{

	printf("3^3 = %d\n", ft_recursive_power(3, 3));
	printf("2^3 = %d\n", ft_recursive_power(2, 3));
	printf("0^0 = %d\n", ft_recursive_power(0, 0));
	printf("3^0 = %d\n", ft_recursive_power(3, 0));
	printf("3^-2 = %d\n", ft_recursive_power(3, -2));
}

