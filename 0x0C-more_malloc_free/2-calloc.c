#include <stdlib.h>

/**
 * . - 
 * @
 *
 * Return: .
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
