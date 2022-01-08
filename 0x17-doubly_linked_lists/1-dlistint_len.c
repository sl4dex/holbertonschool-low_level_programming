#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of dll
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (h)
	{
		size++;
		while (h->next)
		{
			h = h->next;
			size++;
		}
	}
	return (size);
}
