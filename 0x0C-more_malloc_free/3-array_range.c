#include <stdlib.h>

/**
 * array_range - creates an array of ints from min to max
 * @min: min value for array
 * @max: max value for array
 * Return: starting point of created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min) + 1);
	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
