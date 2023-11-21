#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of
 * linked list
 * @head: pointer to pointer of the first node
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded and -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i = 0;
	listint_t *current, *temp;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	for (; current && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}

