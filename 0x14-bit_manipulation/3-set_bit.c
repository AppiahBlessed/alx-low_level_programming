#include "main.h"
/**
 *set_bit - Change bit at given index
 *@n: Holds number to manipulate
 *@index: Index to change at
 *Return: Returns 1 and -1 for success and failure respectively
 *
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

