#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array and initializes it to 0
 * @nmemb: num of datatypes
 * @size: datatype size
 * Return: pointer to start of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	memset(p, 0, nmemb * size);
	return (p);
}
