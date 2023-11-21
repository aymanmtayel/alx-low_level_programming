#include "lists.h"

/**
 * free_listint2 - function that frees a list and sets the head to NULL
 * @head: pointer to pointer of the first node
 *
 * Return: VOID
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
