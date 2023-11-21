#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer to the first node
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
