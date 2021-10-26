#include <stdlib.h>

/**
 * _strdup - points to a space in heap containg the string parameter
 * @str: string to be duped
 *
 * Return: pointer to memory space in heap
 */
char *_strdup(char *str)
{
	char *ptr;
	int size, j;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != 0; size++)
	{
	}
	ptr = (char *) malloc(size * sizeof(char));
	if (!ptr)
		return (NULL);
	for (j = 0; j < size; j++)
		ptr[j] = str[j];
	return (ptr);
}
