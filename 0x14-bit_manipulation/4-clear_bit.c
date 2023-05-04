#include "main.h"
/**
 *clear_bit - Change value bit to 0
 *@n: Number to manipulate
 *@index: Index of bit to change to 0
 *Return: Returns 1 and -1 for success and failure respectively
 *
 *
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

