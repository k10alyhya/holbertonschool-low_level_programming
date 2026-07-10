#include "main.h"

/**
 * _islower - checks for lowercase character
 * @r: the character to check
 *
 * Return: 1 if r is lowercase, 0 otherwise
 */
int _islower(int r)
{
if (r <= 'z' && r >= 'a')
{
	return (1);
}
else
{

	return (0);
}
}
