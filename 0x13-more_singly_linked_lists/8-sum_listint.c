#include "lists.h"

/**
 *sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 *@head: pointer to the first element in the list
 *Return: the sum of the n
 *
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
