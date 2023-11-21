#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: pointer to pointer of first node
 *
 * Return: the node's data, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n_d;

	if (!*head)
		return (0);
	n_d = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);
	return (n_d);
}
