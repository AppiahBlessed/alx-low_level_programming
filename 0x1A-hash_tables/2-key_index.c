#include "hash_tables.h"
/**
 *key_index - Computes the index of the key
 *@key: The string value
 *@size: Size of the table
 *Return: Returns the index
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_table_t *newtable;
	unsigned long int num, index;
/*Create the table*/
	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
	{
		return (0);
	}
	newtable->array = malloc(sizeof(hash_node_t *) * size);
	if (newtable->array == NULL)
	{
		return (0);
	}
	newtable->size = size;
/*Get the key*/
	num = hash_djb2(key);
	index = num % size;
	return (index);
}
