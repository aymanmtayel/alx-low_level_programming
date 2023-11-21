#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a list
 * @head: pointer to the first node
 * @n: integer to be added in the new node
 *
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *current;

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
