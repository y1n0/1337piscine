/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:16:40 by moel-idr          #+#    #+#             */
/*   Updated: 2022/09/12 00:45:23 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <stdio.h>
#include <stdlib.h>


int ft_strstr(char *str, char *to_find, int start)
{
	char	*orig_needle;
	char	*needle_head;

	if (*to_find == '\0')
		return (str);
	needle_head = NULL;
	orig_needle = to_find;
	while (*str != '\0' && *to_find != '\0')
	{
		if (*str == *to_find)
		{
			if (needle_head == NULL)
				needle_head = str;
			to_find++;
		}
		else
		{
			needle_head = NULL;
			to_find = orig_needle;
		}
		str++;
	}
	if (*str != *to_find && *str == '\0')
		return (NULL);
	return (needle_head);
}

int	ft_strstr(char *haystack, char *needle, int start)
{
	int i;
	
	haystack += start;
	while ( *haystack && *needle )
	{
		if (*str == *needle)
		{
		}
	}

}


//char **ft_split(char *str, char *charset)
void ft_split(char *str, char *charset)
{
	int i = ft_strlen(str);
	int seplen = ft_strlen(seplen);
	char **tab = (char **) malloc(sizeof(char *) * (i + 1));

	while ( *str )
	{
		while ( *str == *charset ){
			str++;
			charset++;
		}

	}
}

// -hello--hello--hello-- --

int main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	ft_split(av[1], av[2]);

}
