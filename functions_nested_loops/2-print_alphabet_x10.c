#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase,
 * followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char d;

	for (i = 0; i < 10; i++)
	{
		d = 'a';
		while (d <= 'z')
		{
			_putchar(d);
			d++;
		}
		_putchar('\n');
	}
}
