#include <stdio.h>
/**
 * main print number from 0 to 9,
 * and between each number comma.
 *
 * Return : always 0(Sucsess)
 */
int main(void)
{

int x = 48;

	while (x != 58)
	{
	putchar(x);
	if (x == 57)
	{
	break ;
	}
	putchar(' ');
	putchar(',');
	x++;
	
	}


putchar('\n');
return(0);
}
