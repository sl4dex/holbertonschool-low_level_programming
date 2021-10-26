#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of 2d array
 * @height: Height of 2d array
 *
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i] = malloc(width * sizeof(int));
	}
	return (ptr);

}
