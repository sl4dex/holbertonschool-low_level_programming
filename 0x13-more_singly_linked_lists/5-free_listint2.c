#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: address of pointer to start of list
 */
void free_listint2(listint_t **head)
{
	listint_t *last = *head;

	if (*head)
	{
		if (last->next)
			free_listint2(&(last->next));
		free(last);
	}
	*head = NULL;
}
