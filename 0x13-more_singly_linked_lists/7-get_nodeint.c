#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of linked list
 * @head: pointer to the first node
 * @index: index of the node to return it's data
 *
 * Return: node data or NULL if doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
