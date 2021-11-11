#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of the list
 *
 * Return: number of elements in list
 */
size_t print_list(const list_t *h)
{
	size_t elem = 0;

	if (h)
	{
		elem++;
		if (h->str)
			printf("[%d]  %s\n", h->len, h->str);
		else
			printf("[0]  (nil)\n");
		if (h->next)
		{
			elem += print_list(h->next);
		}
	}
	return (elem);
}
