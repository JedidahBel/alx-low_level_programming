#include "main.h"

/**
 * print_chessboard - print a 8x8 chessboard
 * @a: a 2D array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])

{
	unsigned int row, col;

	row = 0;
	while (row < 8)

	{
		col = 0;
		while (col < 8)

		{
			putchar(a[row][col]);
			col++;

		}
		putchar('\n');
		row++;

	}
}
