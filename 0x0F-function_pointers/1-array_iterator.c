#include "function_pointers.h"
/**
 *array_iterator - Prkint array content
 *@array: Holds array of integers
 *@size: Size of array
 *@action: Our function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
