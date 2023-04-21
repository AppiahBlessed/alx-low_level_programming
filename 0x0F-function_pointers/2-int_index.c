#include "function_pointers.h"
/**
 *int_index - Function prints index of same int
 *@array: Array of integers
 *@size: Size of array
 *@cmp: Pointer to function that compares
 *Return: Returns -1 on else
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int id;

	for (id = 0; id < size; id++)
	{
		if (cmp(array[id]) != 0)
			return (id);
	}
	return (-1);

}
