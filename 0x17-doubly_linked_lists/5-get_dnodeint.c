#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of dll
 * @index: index of node to retrieve from dll
 *
 * Return: nth node of dll, or NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (head)
	{
		if (node == index)
			return (head);
		node++;
		if (head->next)
			head = head->next;
		else
			break;
	}
	return (NULL);
}
