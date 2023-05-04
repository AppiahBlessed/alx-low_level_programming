#include "main.h"
/**
 *print_binary - Print integer in binary format
 *@n: Number thats being converted
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int place;

	for (i = 63; i >= 0; i--)
	{
		place = n >> i;

		if (place & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

