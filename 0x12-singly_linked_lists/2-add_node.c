#include "lists.h"

/**
 * add_node - function that add a new node at the beginning of a list
 * @head: pointer to the head
 * @str: string to be put in the node
 *
 * Return: the adress of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *head_n;
	size_t i;

	head_n = malloc(sizeof(list_t));

	if (!head_n)
		return (NULL);
	head_n->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	if (!head_n->str)
	{
		free(head_n);
		return (NULL);
	}
	head_n->len = i;
	head_n->next = *head;
	*head = head_n;
	return (head_n);
}
