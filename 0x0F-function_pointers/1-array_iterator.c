#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter for an array
 * @array: array to print
 * @size: size of array
 * @action: function to print the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && size > 0 && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
