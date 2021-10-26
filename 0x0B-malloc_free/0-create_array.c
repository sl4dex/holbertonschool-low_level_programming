#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: sizze of array
 * @c: char to fill the array
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
