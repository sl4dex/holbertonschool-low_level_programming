#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: mem address of start of list
 * @str: name of the last element of list to be inserted
 *
 * Return: pointer to last element of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail;
	list_t *last = *head;

	new_tail = malloc(sizeof(list_t));
	new_tail->str = strdup(str);
	new_tail->len = strlen(str);
	new_tail->next = NULL;
	if (!(head && str))
		return (new_tail);
	else if (!(*head))
	{
		*head = new_tail;
		return (*head);
	}
	else
	{
		while (last->next)
			last = last->next;
		last->next = new_tail;
	}
	return (new_tail);
}
