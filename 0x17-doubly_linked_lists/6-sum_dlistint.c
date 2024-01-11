#include "lists.h"

/**
 * sum_dlistint - sum all the data of a double linked list
 * @head: pointer to the list head
 * Return: the sum of all data  or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
