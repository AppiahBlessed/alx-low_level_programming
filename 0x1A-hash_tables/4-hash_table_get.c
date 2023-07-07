#include "hash_tables.h"
/**
 *hash_table_get - Search and retrieve value
 *@ht: HashTable
 *@key: Specific key value
 *Return: Returns found value or Null if
 *it doesnt exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;
/*Handle errors*/
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
/*Get indexx using key*/
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
/*Traverse and get key value*/
	while (current != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);
		current = current->next;
	}
/*Returns Null is not found*/
	return (NULL);
}
