#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
