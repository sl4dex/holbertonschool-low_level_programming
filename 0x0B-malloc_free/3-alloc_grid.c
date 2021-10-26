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
	if (ptr == 0)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == 0)
		{
			for (; i <= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);

}
