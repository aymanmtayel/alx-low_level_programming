#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the first node
 *
 * Return: number of nodes in a list, if failed exit with 98
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *nextn = head;
	size_t i = 0, k = 0;

	while (current && nextn && nextn->next)
	{
		if (!(nextn->next->next))
			break;
		current = current->next;
		nextn = nextn->next->next;

		if (current == nextn)
		{
			current = current->next;
			k = 1;
			break;
		}
	}
	if (!k)
	{
		while (head)
		{
			i++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (i);
	}
	while (head)
	{
		i++;
		if (head == current)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}
