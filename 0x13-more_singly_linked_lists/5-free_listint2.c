#include "lists.h"

/**
 *free_listint2 - frees a list and make head = NULL
 *@head: double pointer to the first element
 *Return: void
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}

