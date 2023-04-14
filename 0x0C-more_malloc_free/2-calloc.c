#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - Reserves memory
 *@nmemb: nmemb
 *@size: size
 *Return: Return desintion pointer
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *dest;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	dest = malloc(nmemb * size);
	if (dest == NULL)
	{
		return (NULL);
	}
/*Set memory to zero*/
	memset(dest, 0, (nmemb * size));
	return (dest);
}
