#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - Freeing memory space
 *@d: Pointer to dog_t
 *
 *
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);/*Free previously allocated memory for name*/
		free(d->owner);/*Free previously allocated memory for owner*/
		free(d);/*Free the structure itself*/
	}
}
