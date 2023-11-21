#include "lists.h"

/**
 * reverse_listint - function that reverse a linked list
 * @head: pointer to pointer of the first node
 *
 * Return: pointer to the first node in the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse = NULL;
	listint_t *forward = *head;

	while (*head)
	{
		forward = (*head)->next;
		(*head)->next = reverse;
		reverse = *head;
		*head = forward;
	}
	*head = reverse;
	return (reverse);
}
