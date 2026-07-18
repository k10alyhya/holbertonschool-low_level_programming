#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
 void reverse_array(int *a, int n)
{
	int tmp;
	int start = 0; 
	int end = n - 1;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp; 
		start++;
		end--;
	}
}
