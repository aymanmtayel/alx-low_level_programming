#include "lists.h"

/**
 *listint_len - gives the number of elments in a list
 *@h: pointer to the first element
 *Return: number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *l;

	count = 0;
	l = h;

	if (h == NULL)
		return (0);

	while (l != NULL)
	{
		count++;
		l = l->next;
	}
	return (count);
}
