#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: number to get the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int r)
{

	r = r % 10;
	_putchar('0' + r);
	return (r);
}
