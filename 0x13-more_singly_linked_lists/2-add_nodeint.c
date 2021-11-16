#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: address of head of list
 * @n: value of int element of new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_head;

	if (!head)
		return (NULL);
	n_head = malloc(sizeof(listint_t));
	n_head->n = n;
	n_head->next = NULL;
	if (!(*head))
	{
		*head = n_head;
		return (*head);
	}
	n_head->next = *head;
	*head = n_head;
	return (*head);
}
