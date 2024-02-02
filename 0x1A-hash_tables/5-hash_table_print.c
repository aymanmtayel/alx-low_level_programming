#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *curr;
	char status = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		curr = ht->array[index];
		while (curr != NULL)
		{
			if (status == 1)
				printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			status = 1;
			curr = curr->next;
		}
	}
	printf("}\n");
}
