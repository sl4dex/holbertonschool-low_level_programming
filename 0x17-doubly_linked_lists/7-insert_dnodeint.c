#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to pointer of the head of the dll
 * @idx: position to insert new node
 * @n: int data element of dll node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *nxt, *current = *h;
	unsigned int node = 0;

	if (!(*h) && idx == 0)
		return (add_dnodeint(h, n));
	while (current)
	{
		if (node == idx - 1)
		{
			if (!(current->next))
				return (add_dnodeint_end(&current, n));
			newnode = malloc(sizeof(dlistint_t));
			if (!newnode)
				return (NULL);
			newnode->n = n;
			newnode->prev = current;
			nxt = current->next;
			newnode->next = nxt;
			current->next = newnode;
			nxt->prev = newnode;
			return (newnode);
		}
		node++;
		if (current->next)
			current = current->next;
		else
			break;
	}
	return (NULL);
}
