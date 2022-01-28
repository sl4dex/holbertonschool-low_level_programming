#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: value associated with the key. Must be duplicated and can be empty
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newnode;

	if (!key || !ht)
		return (0);
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;
	idx = key_index((const unsigned char *)key, ht->size);
	if (!(ht->array[idx]))
	{
		(ht->array[idx]) = newnode;
	}
	else
	{
		newnode->next = ht->array[idx];
		ht->array[idx] = newnode;
	}
	return (1);
}
