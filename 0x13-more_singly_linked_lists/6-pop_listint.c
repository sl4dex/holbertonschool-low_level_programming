#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: address of head of list
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *h_copy;
	int n;

	if (!head || !(*head))
		return (0);
	h_copy = *head;
	n = h_copy->n;
	if (h_copy->next)
		*head = h_copy->next;
	free(h_copy);
	return (n);
}
