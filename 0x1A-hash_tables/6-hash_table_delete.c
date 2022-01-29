#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *next;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			free(current->key);
			current->key = NULL;
			free(current->value);
			current->value = NULL;
			next = current->next;
			free(current);
			current = NULL;
			current = next;
		}
	}
	free(ht->array);
	free(ht);
}
