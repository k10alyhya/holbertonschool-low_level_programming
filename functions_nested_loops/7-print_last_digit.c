#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: the number to check
 *
 * Return: the value of the last digit
 */
int print_last_digit(int r)
{
	r = r % 10;

	if (r < 0)
		r = r * -1;

	_putchar('0' + r);

	return (r);
}
