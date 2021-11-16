#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to start of list
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		if (head->next)
			free_listint(head->next);
		free(head);
	}
}
