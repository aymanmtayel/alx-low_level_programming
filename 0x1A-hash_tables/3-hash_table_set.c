#include "hash_tables.h"

/**
 * make_hnode - creates a new hash node
 * @key: key for the node
 * @value: value to be but inside the node
 * Return: the new node pointer
 */

hash_node_t *make_hnode(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}


/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table to be used
 * @key: the key
 * @value: the value associated with the key. value must be duplicated.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *curr;
	unsigned long int index;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(curr->value);
			curr->value = new_value;
			return (1);
		}
		curr = curr->next;
	}
	new_node = make_hnode(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
