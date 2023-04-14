#include <stdlib.h>
#include "main.h"
/**
 *array_range - List the range from min to max
 *@min: Minimum number
 *@max: Maximum number
 *Return: Returns pointer to newly formed array
 *
 */
int *array_range(int min, int max)
{/*Initkialize iterator and pointer*/
	int i;
	int *dest;
	/*Plus one to handle null byte terminator*/
	dest = malloc((max - min +1) * sizeof(int));
	if (dest == NULL)/*Return if malloc fails*/
	{
		return (NULL);
	}
	if (min > max)/*Return null when range is negative*/
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{/*Assign min increasing by one to dest in all index*/
		dest[i] = min + i;
	}
	return (dest);/**Return pointer to array/
}
