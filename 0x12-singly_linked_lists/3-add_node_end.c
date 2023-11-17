#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: pointer to the first node
 * @str: string to be put inside the node
 *
 * Return: the address of the new node or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *gedida, *last;

	gedida = malloc(sizeof(list_t));

	if (!gedida)
	{
		free(gedida);
		return (NULL);
	}

	gedida->str = strdup(str);
	if (!gedida->str)
	{
		free(gedida);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;
	gedida->len = i;
	gedida->next = NULL;

	if (!*head)
		*head = gedida;
	else
	{
		last = *head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = gedida;
	}
	return (gedida);
}
