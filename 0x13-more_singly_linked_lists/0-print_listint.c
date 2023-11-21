#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to the start of the list
 *
 * Return: the number of the nodes on success
 */

size_t print_listint(const listint_t *h)
{
	 size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
