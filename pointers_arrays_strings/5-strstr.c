#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of needle, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;

			j++;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);

		i++;
	}

	return (NULL);
}
