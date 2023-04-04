#include "lists.h"

/**
 *free_listint2 - frees a list and make head = NULL
 *@head: double pointer to the first element
 *Return: void
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	*head = NULL;
}

