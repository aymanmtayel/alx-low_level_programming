#include "lists.h"
/**
 * print_listint_safe - print a list
 * @head: point to the first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *first = head, *later = head;
	size_t i = 0;
	int l = 0;

	while (first && later && later->next)
	{
		if (!(later->next->next))
			break;
		first = first->next;
		later = later->next->next;
		if (first == later)
		{
			first = first->next;
			l = 1;
			break;
		}
	}
	if (!l)
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
		if (head == first)
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
