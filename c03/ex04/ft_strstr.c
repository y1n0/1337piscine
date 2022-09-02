/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:48:54 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/28 15:40:59 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
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
	return (needle_head);
}
