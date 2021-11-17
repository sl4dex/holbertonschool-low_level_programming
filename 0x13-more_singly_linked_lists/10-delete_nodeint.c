#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: head of list
 * @index: index of the list where the node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *last, *next2;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	last = *head;
	if (!index)
	{
		*head = (*head)->next;
		free(last);
		return (1);
	}
	for (i = 0; i != index - 1; i++)
	{
		if (last->next)
			last = last->next;
		else
			return (-1);
	}
	if (last->next)
	{
		next2 = last->next->next;
		free(last->next);
		last->next = next2;
	}
	return (1);
}
