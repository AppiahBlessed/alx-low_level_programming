#include "dog.h"
#include <string.h>
/**
 *init_dog - Initializes struct dog
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
 *@d: Pointer to member
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
{	
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
}
