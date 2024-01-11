#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: list header
 * Return: num of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
