#include "lists.h"

/**
 *add_node - add new node and print it along with the elemnt number
 *@head: head pointer
 *@str: string in the node
 *Return:the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t nelem;
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (nelem = 0; str[nelem]; nelem++)
		;
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = nelem;
	temp->next = *head;
	*head = temp;

	return (temp);

}
