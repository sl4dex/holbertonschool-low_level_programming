#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to compare
 * @size: size of array
 * @cmp: function that compares array elements
 * Return: index of desired array element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			/*if function pointed by cmp returns 1 */
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
