#include "main.h"
/**
 *flip_bits - Counts bits needed to change
 *moving from one number to another
 *@n: First number
 *@m: Second
 *Return: Changed number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int num;
	unsigned long int NOR = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = NOR >> i;
		if (num & 1)
			count++;
	}

	return (count);
}

