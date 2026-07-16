#include "main.h"
/**
 * rev_string -reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char temp;
	char *p = &s[0];
	int length = 0;
	char *n;
	
	while (s[length] != '\0')
	{
		length++;
	}
	n = &s[length - 1];

	while (p < n )
	{
		temp = *p;
		*p = *n;
		*n = temp;	
		n--;
		p++;
	
	}	
}
