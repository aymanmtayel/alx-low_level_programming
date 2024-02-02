#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash tabel
 * @ht: hash table to be deleted
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *foll;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			foll = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = foll;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
