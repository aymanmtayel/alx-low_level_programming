#include "lists.h"

/**
 *add_nodeint - add a new node in the beginning
 *@head: pointer to the current node
 *@n: integer to be add to the new node
 *Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
