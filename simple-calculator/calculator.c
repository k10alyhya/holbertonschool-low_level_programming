#include <stdio.h>
/**
 *
 *
 *
 */
int main (void)
{
	int n;

	printf(" Welcome to Simple Calculator ");
	printf(" Simple Calculator : \n   1) Add \n  2) Subtract \n  3) Multiply \n 4) Divide \n  0) Quit \n Choice :");

	scanf(" %d", &n);
	
	if (n == 0)
	{
		printf("!bye\n");
	}

	return (0); 
}
