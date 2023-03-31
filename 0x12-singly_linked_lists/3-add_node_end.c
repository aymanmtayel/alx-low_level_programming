#include "lists.h"

/**
 *add_node_end - make a new node a the end
 *@head: pointer to the first node
 *@str: string to be in the node
 *Return: the new node data
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	size_t counter;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (counter = 0; str[counter]; counter++)
		;
	new_node->len = counter;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
}
	return (*head);
}
