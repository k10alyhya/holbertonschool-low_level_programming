#include "main.h"
/**
 *
 *
 */
void print_rev(char *s)
{
	int length = 0;
	int i = 0;
	
	while (s[length] != '\0')
	{
		length ++;
	}

		i = length - 1;
		for ( ;i >= 0; i--) 
		{
		  _putchar(s[i]);
		   
				  
		}
		_putchar('\n');
	}
