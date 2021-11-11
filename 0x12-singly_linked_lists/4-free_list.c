#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer to start of list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free(head->str);
		if (head->next)
			free_list(head->next);
		free(head);
	}
}
