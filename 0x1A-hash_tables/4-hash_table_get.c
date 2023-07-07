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
	if (index >= ht->size)
		return (NULL);
/*Traverse and get key value*/
	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}
/*Returns Null is not found*/
	return (NULL);
}
