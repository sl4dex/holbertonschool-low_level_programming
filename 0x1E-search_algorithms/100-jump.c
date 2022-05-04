#include <math.h>
#include "search_algos.h"
/**
 * jump_search -  searches for a value in array of ints using Jump search
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int i, step;

	if (!array)
		return (-1);
	step = (int)sqrt(size);
	for (i = 0; i < (int)size; i += step)
	{
		if (value <= array[i + step])
		{
			printf("Value found between indexes [%d] and [%d]\n",
			i, i + step);
			for (; i <= i + step; i++)
			{
				printf("Value checked array[%d] = [%d]\n",
				i, array[i]);
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (value > array[i] && i == (int)size - 1)
			printf("Value found between indexes [%d] and [%d]\n",
			i, i + step);
	}
	return (-1);
}
