#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to memory address of the head of the dll
 * @n: int data of node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *aux = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (!(*head))
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (aux->next)
		aux = aux->next;
	newnode->prev = aux;
	aux->next = newnode;
	return (newnode);
}
