#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, col, num;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			num = row * col;

			if (col == 0)
			{
				_putchar(num + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (num > 9)
				{
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(num + '0');
				}
			}
		}
		_putchar('\n');
	}
}
