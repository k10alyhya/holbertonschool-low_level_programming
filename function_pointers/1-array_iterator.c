#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes a function on each array element
 * @array: The array of integers
 * @size: The number of elements in the array
 * @action: Pointer to the function applied to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
