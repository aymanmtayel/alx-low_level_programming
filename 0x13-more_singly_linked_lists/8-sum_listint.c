#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data in a linked list
 * @head: first node pointer
 *
 * Return: sum of the data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
