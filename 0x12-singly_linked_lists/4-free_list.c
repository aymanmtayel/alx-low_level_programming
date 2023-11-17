#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer to the first node
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
