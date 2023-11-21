#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to the start of the list
 *
 * Return: the number of the nodes on success
 */

size_t print_listint(const listint_t *h)
{
	 int i = 0;

	if (h == NULL)
		return (1);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
