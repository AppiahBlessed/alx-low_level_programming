#include "hash_tables.h"
/**
 *hash_table_delete - Freeing the table
 *@ht: Table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
		ht->array[i] = NULL;
	}
	free(next);
	free(ht->array[i]);
	free(ht);
}
