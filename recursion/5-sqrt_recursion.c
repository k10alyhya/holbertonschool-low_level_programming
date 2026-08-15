#include "main.h"

/**
 * sqrt_helper - Finds the natural square root of a number
 * @n: Number to find the square root of
 * @guess: Current number being tested
 *
 * Return: Natural square root of n, or -1 if none exists
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to find the square root of
 *
 * Return: Natural square root of n, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}
