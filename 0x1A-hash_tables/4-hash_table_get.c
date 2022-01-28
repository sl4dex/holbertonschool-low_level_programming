#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: The key to search
 * Return: value associated with the element, NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;
	
	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
