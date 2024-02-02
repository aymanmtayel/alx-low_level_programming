#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: the key to get its index
 * @size: size of the array at the hash table
 * Return: the index or NULL if failed
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
