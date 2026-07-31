#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: number of command-line arguments
 * @argv: array containing command-line arguments
 *
 * Return: 0 on success, 1 if an argument contains a non-digit
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	int sum = 0;
	int num;

	while (i < argc)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}

			j++;
		}

		num = atoi(argv[i]);
		sum += num;
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
