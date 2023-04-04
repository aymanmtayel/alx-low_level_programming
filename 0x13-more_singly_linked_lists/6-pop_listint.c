#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: pointer to first element
 *Return: the head node’s data (n).
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	return (data);
}
