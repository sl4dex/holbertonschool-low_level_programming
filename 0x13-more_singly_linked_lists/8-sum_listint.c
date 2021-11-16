#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: head of list
 *
 * Return: the sum of all the data (n) of the list
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head)
	{
		while (head->next)
		{
			sum += head->n;
			head = head->next;
		}
		sum += head->n;
	}
	return (sum);
}
