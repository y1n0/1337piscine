#include "ft_stock_str.h"
#include <stdio.h>

int main()
{
	struct s_stock_str s1;
	printf("var %lu\n",sizeof(s1));
	printf("typ %lu\n",sizeof(struct s_stock_str));
	printf("ptr %lu\n",sizeof(struct s_stock_str *));

}
