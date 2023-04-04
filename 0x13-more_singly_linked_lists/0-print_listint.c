#include "lists.h"

/**
 *print_listint - prints the elements of a list
 *@h: pointer to the first element of a list
 *Return: number of element in the list
 *
 */

size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *l;

	count = 0;
	l = h;

	if (h == NULL)
		return (-1);
	while (l != NULL)
	{
		printf("%d\n", l->n);
		l = l->next;
		count++;
	}
	return (count);
}
