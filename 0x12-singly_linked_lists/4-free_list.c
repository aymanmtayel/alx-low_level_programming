#include "lists.h"

/**
 *free_list - frees a list_t list
 *@head: pointer to the list
 *Return: Void
 */

void free_list(list_t *head)
{
	list_t *new_node;

	while (head != NULL)
	{
		new_node = head->next;
		free(head->str);
		free(head);
		head = new_node;
	}
}
