#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: number of command-line arguments
 * @argv: array containing command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
