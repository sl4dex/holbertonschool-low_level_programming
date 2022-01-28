#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, first;
	hash_node_t *current;

	if (!ht)
		return;
	printf("{");
	first = 1;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (first == 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
				first = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
