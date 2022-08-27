/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-idr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:12:59 by moel-idr          #+#    #+#             */
/*   Updated: 2022/08/26 22:12:59 by moel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest_start;
	unsigned int	i;
	int				fill_null;

	i = 0;
	fill_null = 0;
	dest_start = dest;
	while (i++ < n)
	{
		if (*src)
			*dest = *src;
		else
			*dest = '\0';
		src++;
		dest++;
	}
	return (dest_start);
}

int	main(void)
{
	char	a[6] = "hello";
	char	b[10];
	char	sa[6] = "hello";
	char	sb[10];

	ft_strncpy(b, a, 3);
	printf("a %s\n", a);
	printf("b %s\n", b);
	strncpy(sb, sa, 3);
	printf("a %s\n", sa);
	printf("b %s\n", sb);

	{
	printf("test 1: Src and dst are of same size i.e 10 bytes each with null terminated.\n");
	int len = 10;
	char test1_src[10] = "123456789";
	char test1_dest[len];
	char test1_ref_dest[len];
	ft_strncpy(test1_dest, test1_src, len);
	strncpy(test1_ref_dest, test1_src, len);
	printf("len\tsrc\tdest\tdestref\n");
	printf("%d \t %s \t %s \t %s \n\n", len, test1_src, test1_dest, test1_ref_dest);
	}


	{
	printf("test 2: Src and dst are of same size i.e 10 bytes each without null terminated.\n");
	int len = 10;
	char test1_src[10] = "1234567890";
	char test1_dest[len];
	char test1_ref_dest[len];
	ft_strncpy(test1_dest, test1_src, len);
	strncpy(test1_ref_dest, test1_src, len);
	printf("len\tsrc\tdest\tdestref\n");
	printf("%d \t %s \t %s \t %s \n\n", len, test1_src, test1_dest, test1_ref_dest);
	}


	printf("test 3: Src and dst are of different size:\n");
	

// 	printf("test 3.1: Src of size 10 bytes, dst of 4 bytes\n");
// {
// 	// int len = 10;
// 	char test1_src[10] = "123456789";
// 	char test1_dest[4];
// 	char test1_ref_dest[4];
// 	ft_strncpy(test1_dest, test1_src, 10);
// 	strncpy(test1_ref_dest, test1_src, 10);
// 	printf("len src \tlen dest\tsrc\tdest\tdestref\tlenref\n");
// 	printf("%d \t %d \t %s \t %s \t %s \t %d \n\n", 10, 4, test1_src, test1_dest, test1_ref_dest, 10);
// 	}

	printf("test 3.2: Src of size 5 bytes, dst of 10 bytes both null terminated\n");
	{
	// int len = 10;
	char test1_src[5] = "1234";
	char test1_dest[10];
	char test1_ref_dest[10];
	ft_strncpy(test1_dest, test1_src, 5);
	strncpy(test1_ref_dest, test1_src, 5);
	printf("len src \tlen dest\tsrc\tdest\tdestref\tlenref\n");
	printf("%d \t %d \t %s \t %s \t %s \t %d \n\n", 5, 10, test1_src, test1_dest, test1_ref_dest, 5);
	}
	printf("test 3.3: Src of size 5 bytes, dst of 10 bytes both not null terminated\n");{
	// int len = 10;
	char test1_src[5] = "12345";
	char test1_dest[10];
	char test1_ref_dest[10];
	ft_strncpy(test1_dest, test1_src, 5);
	strncpy(test1_ref_dest, test1_src, 5);
	printf("len src \tlen dest\tsrc\tdest\tdestref\tlenref\n");
	printf("%d \t %d \t %s \t %s \t %s \t %d \n\n", 5, 10, test1_src, test1_dest, test1_ref_dest, 5);
	}
	printf("test 3.4: Src of size 5 bytes, dst of 10 bytes, src null terminated, dst not\n");{
	// int len = 10;
	char test1_src[5] = "1234";
	char test1_dest[10];
	char test1_ref_dest[10];
	ft_strncpy(test1_dest, test1_src, 5);
	strncpy(test1_ref_dest, test1_src, 5);
	printf("len src \tlen dest\tsrc\tdest\tdestref\tlenref\n");
	printf("%d \t %d \t %s \t %s \t %s \t %d \n\n", 5, 10, test1_src, test1_dest, test1_ref_dest, 5);
	}
}