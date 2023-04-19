#include "dog.h"
#include <string.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if ((*d).owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	if (d == NULL)
	{
		printf(" ");
	}
		else
		{
			printf("Name: %s\n", (*d).name);
			printf("Age: %f\n", (*d).age);	
			printf("Owner: %s\n", (*d).owner);
		}
}
