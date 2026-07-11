#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int line;
	int numbers;

	for (line = 0; line < 10; line++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
			{
				_putchar((numbers / 10) + '0');
			}
			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}
