#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	const unsigned char *k = (const unsigned char *)strdup((const char *)key);
	unsigned long int idx = hash_djb2(k) % size;

	free((void *)k);
	return (idx);
}
