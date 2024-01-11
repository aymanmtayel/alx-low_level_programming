#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 * @head: pointer to the head of list
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
