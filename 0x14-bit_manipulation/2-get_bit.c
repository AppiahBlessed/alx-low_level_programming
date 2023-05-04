#include "main.h"
/**
 *get_bit - Gets bit equivalent at index
 *@n: Number to be converted
 *@index: Index at which to get bit
 *Return: Returns the value extracted
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitnum;

	if (index > 63)
	{
		return (-1);
	}
	bitnum = (n >> index) & 1;
	return (bitnum);
}
