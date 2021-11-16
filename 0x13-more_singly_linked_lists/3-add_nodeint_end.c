#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: mem address of start of list
 * @n: int of the last element of list to be inserted
 *
 * Return: pointer to last element of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail;
	listint_t *last = *head;

	if (!head)
		return (NULL);
	new_tail = malloc(sizeof(listint_t));
	if (!new_tail)
		return (NULL);
	new_tail->n = n;
	new_tail->next = NULL;
	if (!(*head))
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
