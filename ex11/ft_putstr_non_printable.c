/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:24:35 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/27 12:24:35 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_char_is_printable(char c)
{
	if (!(32 <= c && c <= 127))
		return (0);
	return (1);
}

void	ft_putnbr(int nb)
{
	int	c;

	if (nb > 0x10)
	{
		ft_putnbr(nb / 0x10);
		ft_putnbr(nb % 0x10);
	}
	else
	{
		if (nb < 0x10)
			write(1, "0", 1);
		if (nb < 0xa)
		{
			c = nb + 0x30;
			write(1, &c, 1);
		}
		else
		{
			c = nb + 0x61 - 0xa;
			write(1, &c, 1);
		}
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		if (ft_char_is_printable(c) == 0)
		{
			write(1, "\\", 1);
			ft_putnbr(c);
		}
		else
		{
			write(1, &c, 1);
		}
		str++;
	}
}

int	main(void)
{
	// printf("Coucou\ntu vas bien ?");
	// printf("\n====\n");
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
