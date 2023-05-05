#include "main.h"

/**
 * get_endianness - check
 * Return: 0 == for big 1 == little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *a = (char *) &i;

	return (*a);
}

