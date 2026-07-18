#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to an 8 by 8 character array
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col;

	while (row < 8)
	{
		col = 0;

		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;
		}

		_putchar('\n');
		row++;
	}
}
