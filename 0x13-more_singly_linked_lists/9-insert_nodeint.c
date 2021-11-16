#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of list
 * @idx: index of the list where the new node should be added
 * @n: value of int element of node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *last;
	unsigned int i;

	if (!head)
		return (NULL);
	last = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	for (i = 0; i != idx - 1; i++)
	{
		if (last->next)
			last = last->next;
		else
			return (NULL);
	}
	new->next = last->next;
	last->next = new;
	return (last);
}
