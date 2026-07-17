#include "main.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
int length = 0;
int i = 0;

	for ( ; str[i] != '\0';i++)
	{
		length++;
	
	}
	
	if (length % 2 == 0)
	{
		length = length / 2;
	}
	else if (length % 2 != 0)
	{
		length = (length + 1) / 2;
	}	

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	
	}
	_putchar('\n');
}
