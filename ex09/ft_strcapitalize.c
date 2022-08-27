/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:22:40 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/27 11:22:40 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_char_is_alphanumeric(char c)
{
	if (!(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')))
		if (!('0' <= c && c <= '9'))
			return (0);
	return (1);
}

char	ft_char_upper(char c)
{
	if ('a' <= c && c <= 'z')
		c = c - 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	char	*orig_str;
	int		upper_next;

	upper_next = 1;
	orig_str = str;
	while (*str)
	{
		if (upper_next == 1)
		{
			*str = ft_char_upper(*str);
		}
		upper_next = 0;
		if (ft_char_is_alphanumeric(*str) == 0)
			upper_next = 1;
		str++;
	}
	return (orig_str);
}

int	main(void)
{
	char	a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n";;
	char	*b;
	b = ft_strcapitalize(a);
	printf("      in: salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n");
	printf("     out: %s", a);
	printf("expected: Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n");
}
