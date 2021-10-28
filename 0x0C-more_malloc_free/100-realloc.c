#include <stdlib.h>
#include <string.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: old pointer
 * @old_size: old size
 * @new_size: new pointer size
 * Return: pointer to start of now memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrV2;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		ptrV2 = malloc(new_size);
		memcpy(ptr, ptrV2, old_size);
		free(ptr);
	}
	else if (new_size < old_size)
	{
		ptrV2 = malloc(new_size);
		memcpy(ptr, ptrV2, old_size);
		free(ptr);
	}
	return (ptrV2);
}
