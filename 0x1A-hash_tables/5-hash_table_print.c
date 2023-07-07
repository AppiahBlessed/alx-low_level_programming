#include "hash_tables.h"
/**
 *hash_table_print - Print element of hash table
 *@ht: Workking hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int flag, index = 0;
	hash_node_t *current;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			flag = 1;/*To determine where to print comma*/
			current = current->next;
		}
	}
	 printf("}\n");
}
