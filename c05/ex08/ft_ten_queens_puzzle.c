#include <stdio.h>

int is_attacked(char *board, int x, int y)
{
	int row;
	int col;
	int d;
	int furthest;
	row = 0;
	while (row < 10)
	{
		col = *board++;
		if (x == row || y == col)
			return 1;
		furthest = x > y ? x : y;
		d = 10 - 1 - furthest;
		// you only need to check the adjacent diagonal square
		while ( d++ < 10  )
		if (
			(row == x + d && col == y + d) ||
			(row == x - d && col == y - d) ||
			(row == x - d && col == y + d) ||
			(row == x + d && col == y - d)
		)
		return 1;
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
	int x, y;
	char board[10] = "------8136";
	printf("board: %s\n", board);

	x = 3; y = 2; printf("(x,y)=(%d,%d) => %d\n", x, y, is_attacked(board, x, y));
}
