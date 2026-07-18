#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string containing accepted characters
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				i++;
				break;
			}

			j++;
		}

		if (accept[j] == '\0')
			return (i);
	}

	return (i);
}
