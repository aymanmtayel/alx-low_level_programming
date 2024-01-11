#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @n: data of the node
 * Return: the address of the new element or NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *curr;

	if (head == NULL || new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		curr = *head;
		while (curr->next)
			curr = curr->next;
		curr->next = new;
		new->prev  = curr;
	}
	return (new);
}
