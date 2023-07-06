#include "hash_tables.h"
/**
 *hash_table_create - Creates a new hash table
 *@size: Size of table
 *Return: Returns the address of the newly
 *created table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
	{
		return (NULL);
	}
	newtable->array = malloc(sizeof(hash_node_t *) * size);
	if (newtable->array == NULL)
	{
		return (NULL);

	}
	newtable->size = size;
	return (newtable);
}
