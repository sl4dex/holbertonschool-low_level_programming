#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head of dll
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		if (head->next)
			free_dlistint(head->next);
		free(head);
	}
}
