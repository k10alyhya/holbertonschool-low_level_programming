#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer, or 0 if no number is found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int started = 0;
	unsigned int number = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && started == 0)
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			number = number * 10 + (s[i] - '0');
		}
		else if (started == 1)
		{
			break;
		}

		i++;
	}

	return (number * sign);
}
