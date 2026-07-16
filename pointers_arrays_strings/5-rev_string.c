#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char temp;
	char *p;
	char *n;
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	if (length == 0)
	{
		return;
	}

	p = &s[0];
	n = &s[length - 1];

	while (p < n)
	{
		temp = *p;
		*p = *n;
		*n = temp;

		p++;
		n--;
	}
}
