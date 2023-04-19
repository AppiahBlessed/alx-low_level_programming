#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - Creates new_dog of type dog_t
 *@name: Name of dog
 *@age: Gives age of dog
 *@owner: Name of owner
 *Return: Returns ponter to new_dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{/*First declare new_dog*/
	dog_t *new_dog;

	/*Allocate memeory space for new_dog*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);/*Returns if malloc fails*/
	}
	(*new_dog).name = malloc(strlen(name) + 1);/*Allocate memory for name*/
	if ((*new_dog).name == NULL)
	{
		free(new_dog);/*free previous space*/
		return (NULL);
	}
		else /*Copy text of name into new_dog name*/
			strcpy((*new_dog).name, name);
	(*new_dog).owner = malloc(strlen(owner) + 1);
	if ((*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}
		else
			strcpy((*new_dog).owner, owner);
	(*new_dog).age = age;/*Give age to new_dog age*/
	return (new_dog);/*Return pointer to function*/


}
