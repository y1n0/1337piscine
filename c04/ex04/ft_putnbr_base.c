#include <unistd.h>


int ft_strlen(char *str)
{
	char * str_start;
	
	str_start = str;
	while (*str++ != '\0');
	return str - str_start - 1 ;
}

void ft_putnbr(int nb, char *base)
//void ft_putnbr(int nb)
{
	char c;
	int base_n;

	base_n = ft_strlen(base);
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb, base);
	}
	else if (nb < base_n)
	{
		//c = nb + '0';
		c = base [ nb ];
		write(1, &c, 1);
	}
	else
	{
		//c = (nb % base_n) + '0';
		c = base[ nb % base_n ];
		ft_putnbr(nb / base_n, base);
		write(1, &c, 1);
	}
}

int main() {
	ft_putnbr(16, "0123456789abcdef");

}
