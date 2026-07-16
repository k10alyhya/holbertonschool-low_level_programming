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

		else if (n == 1) 
		{
			double num1 , num2;
			double result ;
			scanf("%lf", &num1);
			printf("A: %f.2\n", num1);

			scanf("%lf", &num2);

			 result = num1 + num2;

			printf("Result = %.2f\n", result);
			
		}
		else if (n == 2)
{
			double num1, num2;
			double result;

			scanf("%lf", &num1);
			printf("A: %.2f\n", num1);

			scanf("%lf", &num2);
			printf("B: %.2f\n", num2);

			result = num1 - num2;

			printf("Result = %.2f\n", result);
}

else if (n == 3)
{
	double num1, num2;
	double result;

	scanf("%lf", &num1);
	printf("A: %.2f\n", num1);

	scanf("%lf", &num2);
	printf("B: %.2f\n", num2);

	result = num1 * num2;

	printf("Result = %.2f\n", result);
}

else if (n == 4)
{
	double num1, num2;
	double result;

	scanf("%lf", &num1);
	printf("A: %.2f\n", num1);

	scanf("%lf", &num2);
	printf("B: %.2f\n", num2);

	result = num1 / num2;

	printf("Result = %.2f\n", result);
}
	}

	{

	}
	
	


	return (0); 
}
