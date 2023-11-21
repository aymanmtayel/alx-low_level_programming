#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the begininig of a list
 * @head: pointer to the first node
 * @n: integer element to be added
 *
 * Return: the address of the new element upon success, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (head == NULL || new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
