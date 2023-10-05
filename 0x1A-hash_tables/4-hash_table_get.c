#include "hash_tables.h"

/**
 * hash_table_get - given key, get value
 * @ht: hash table
 * @key: key
 * Return: value; or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !ht->array || ht->size == 0 || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
