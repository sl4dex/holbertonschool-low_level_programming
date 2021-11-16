#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head of list
 *
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	int elem = 0;

	if (h)
	{
		elem++;
		if (h->next)
			elem += listint_len(h->next);
	}
	return (elem);
}
