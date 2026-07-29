#include "function_pointers.h"

/**
 * int_index - Searches for an integer using a comparison function
 * @array: The array to search
 * @size: The number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Return: Index of the first matching element, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);

		i++;
	}

	return (-1);
}
