#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of the dll
 * @head: head of dll
 * Return: sum of all data (n) of dll
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		if (head->next)
			head = head->next;
		else
			break;
	}
	return (sum);
}
