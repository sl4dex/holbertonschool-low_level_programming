#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to start of list
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	int elem = 0;

	if (h)
	{
		elem++;
		if (h->next)
			elem += list_len(h->next);
	}
	return (elem);
}
