#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 * Return: pointer to the newly created hash table or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;


	table = calloc(1, sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		free(table->array);
		return (NULL);
	}
	return (table);
}
