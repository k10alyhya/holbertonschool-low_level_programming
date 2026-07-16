#include <stdio.h>
/**
 *
 *
 *
 */
int main (void)
{
	int n = 1;
	
	 
	printf(" Welcome to Simple Calculator ");
	


	while (n != 0)
	{
		printf(" Simple Calculator : \n   1) Add \n  2) Subtract \n  3) Multiply \n 4) Divide \n  0) Quit \n Choice :");

		scanf(" %d", &n);

		if (n == 0)
		{
			printf("!bey\n");
		
		}

		else if (n > 4  || n < 0)
		{
			printf ("  Invalid choice");
		}
	}

	{

	}
	
	


	return (0); 
}
