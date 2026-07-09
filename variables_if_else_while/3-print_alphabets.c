#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and upercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a';
	char n = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (n <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
