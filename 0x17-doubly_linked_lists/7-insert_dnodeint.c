#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: points to the pointer of the list head
 * @idx: index of the new node to be added
 * @n: data to be added
 * Return: the adress of the new node , return NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *curr;

	if (idx == 0)
		return (add_dnodeint(h, n));
	curr = *h;

	for (; idx != 1; idx--)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}
	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = curr;
	new->next = curr->next;
	curr->next->prev = new;
	curr->next = new;
	return (new);
}
