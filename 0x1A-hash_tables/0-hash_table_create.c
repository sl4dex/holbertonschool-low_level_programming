#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table, or NULL on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_table_t));

	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!(hash->array))
		return (NULL);
	hash->size = size;
	return (hash);
}
