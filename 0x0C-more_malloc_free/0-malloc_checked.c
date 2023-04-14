#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - Allocates memeory to call
 *@b: The number of bytes to allocate
 *Return: Apointer to the memory address
 *
 *
 */
void *malloc_checked(unsigned int b)
{

	void *dest = malloc(b);/*Giving adress of b to dest pointer*/

	if (dest == NULL)/*If condition for NULL*/
	{
		exit(98);/*Returns exit integer 98 when $? is called*/
	}
	return (dest);
}
