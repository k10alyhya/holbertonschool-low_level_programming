#include <stdio.h>

/**
 * main - Prints the hexadecimal numbers from 0 to f,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 0x30;
	while (x <= 0x39)
	{
		putchar(x);
		x++;
	}
	x = 0x61;
	while (x <= 0x66)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
