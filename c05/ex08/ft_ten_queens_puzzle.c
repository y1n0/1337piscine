#include <stdio.h>

int is_attacked2(char *board, int x, int y)
{
	char row;
	char col;
	char smal;
	int d;

	col = '0';
	row = *board;
	while (row)
	{
		printf("row: %c col: %c\n", row, col);
		if ((row == x && row != 'z') || (col == y && row != 'z') )
		{
			printf("on same row or col\n");
			return 1;
		}
		smal = x < y ? x : y;
		d = -(smal - '0');
		printf("smal: %c, d start: %d, d end: %d\n", smal, d, 10 - (smal - '0'));
		while ( d < 10 - (smal - '0'))
		{
			printf("testing %c, %c \n", x + d, y + d);
		if (row == x + d && col == y + d)
		{
			printf("on up up diagonal\n");
			return 1;
		}
			printf("testing %c, %c \n", x + d, y - d);
		if (row == x + d && col == y - d)
		{
			printf("on up down diagonal\n");
			return 1;
		}
		d++;
		}

		col++;
		row = *(++board);
	}
	return 0;
}

int is_attacked(char *board, int x, int y)
{
	int row;
	int col;
	int d;
	int biggest;
	row = 0;
	while (row < 10)
	{
		col = *board++;
		printf("col %c\n", col);
		if (x == row || y == col)
			return 1;
		biggest = x > y ? x : y;
		d = -biggest;

		while ( d++ < 10 - biggest  )
			if (
				(row == x + d && col == y + d) ||
				(row == x - d && col == y + d) )
			return 1;
		row++;
	}
	return 0;
}
/*
int ft_ten_queens_puzzle(void)
{
	int positions[10];

}
*/

int main()
{
	char x, y;
	char board[] = "zz6zzzzzzz";
	printf("board: %s\n", board);

	x = '7'; y = '1'; printf("(x,y)=(%c,%c) => %d\n", x, y, is_attacked2(board, x, y));
}
