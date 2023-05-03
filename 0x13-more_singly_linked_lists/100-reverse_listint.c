#include "lists.h"

/**
 * reverse_listint - prints the reverse of a list
 * @head: pointer to the current node
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = *head;


	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head  = next;
	}
	*head = prev;
	return (prev);
}

