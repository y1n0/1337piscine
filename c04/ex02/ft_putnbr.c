
void ft_putnbr(int nb)
{
	char c;
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		c = (nb % 10) + '0';
		ft_putnbr(nb / 10);
		write(1, &c, 1);
	}
}
