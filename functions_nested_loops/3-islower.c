#include "main.h"

/**
 * main - function that checks for lowercase character.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
_islower(10);
return (0);
}

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
