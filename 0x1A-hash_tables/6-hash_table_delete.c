#include "hash_tables.h"

/**
 * hash_table_delete - free and delete hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (!ht || !ht->array || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (ht->array[i])
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
