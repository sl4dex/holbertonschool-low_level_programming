#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of list
 *
 * Return: number of elements in list
 */
size_t print_listint(const listint_t *h)
{
	int elem = 0;

	if (h)
	{
		elem++;
		printf("%d\n", h->n);
		if (h->next)
			elem += print_listint(h->next);
	}
	return (elem);
}
