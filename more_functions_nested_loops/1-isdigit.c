#include "main.h"
/**
 *  _isdigit - a function that checks for a digit (0 through 9).
 *@ c : check if a degit or not 
 *
 * return : 1 if yes is digit, 0 not digit
 *
 */
int _isdigit(int c)
{
	if (c <= '9')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

