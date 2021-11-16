#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of list
 * @index: index of element to be returned
 *
 * Return: the nth node of the list, or NULL if it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head)
	{
		for (i = 0; i < index; i++)
		{
			if (i == index)
				break;
			else if (head->next)
				head = head->next;
			else
				return (NULL);
		}
	}
	return (head);
}
