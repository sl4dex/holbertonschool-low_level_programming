#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: num of bytes to allocate
 * Return: pointer to start of allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
