#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dll
 * @head: double pointer to head of node
 * @index: index to remove node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int node = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (!(current->next))
			*head  = NULL, free(*head);
		else
		{
			current = current->next;
			free(*head);
			*head = current;
			current->prev = NULL;
		}
		return (1);
	}
	while (current)
	{
		if (node == index)
		{
			if (!(current->next))
			{
				current->prev->next = NULL;
				free(current);
			}
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
				free(current);
			}
			return (1);
		}
		current = current->next;
		node++;
	}
	return (-1);
}
