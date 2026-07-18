#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char letters[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;

		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
				s[i] = replacements[j];

			j++;
		}

		i++;
	}

	return (s);
}
