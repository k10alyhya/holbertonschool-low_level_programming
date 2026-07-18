#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to match
 *
 * Return: pointer to the first matching byte, or NULL if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);

			j++;
		}

		i++;
	}

	return (NULL);
}
