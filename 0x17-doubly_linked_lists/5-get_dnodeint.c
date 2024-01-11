#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a double linked list
 * @head: pointer to the head of the list
 * @index: index of the required node
 * Return: the index of the node or NULL if doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head && i != index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
