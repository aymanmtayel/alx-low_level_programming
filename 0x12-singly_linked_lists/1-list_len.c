#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list.
 *@h: head pointer
 *Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	unsigned int counter;

	counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
