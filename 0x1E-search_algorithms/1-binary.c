#include "search_algos.h"
/**
 * binary_search -  searches for a value in array of ints using Binary search
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int res;

	if (!array)
		return (-1);
	res = bin_s(array, 0, (int)size - 1, value);
	return (res);
}
/**
 * bin_s -  searches for a value in array of ints using Binary search
 * @array: pointer to the first element of the array to search in
 * @start: starting array index
 * @end: ending array index
 * @value: the value to search for
 * Return: the first index where value is located, -1 otherwise
 */
int bin_s(int *array, int start, int end, int value)
{
	int i, mid;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);

	}
	/* if its evaluating a single element */
	if (start == end)
	{
		if (array[start] == value)
			return (start);
		return (-1);
	}
	/* if theres more than one element in interval */
	mid = (start + end) / 2;
	if (value < array[mid])
		return (bin_s(array, start, mid - 1, value));
	if (value > array[mid])
		return (bin_s(array, mid + 1, end, value));
	if (array[mid] == value)
		return (mid);
	return (-1);
}
