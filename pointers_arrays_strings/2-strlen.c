#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to the string.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
int len;

for (len = 0; *s != '\0'; len++)
{
	s++;
}

return (len);
}
