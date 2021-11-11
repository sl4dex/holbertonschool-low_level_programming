#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: address of old node
 * @str: value of nwe str list element
 *
 * Return: pointer to new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
