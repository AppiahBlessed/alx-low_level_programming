#include "main.h"

/**
 * print_last_digit - Prints the last digit of any number
 * @c: Stores the value
 * Return: Always 0
 */
int print_last_digit(int c)
{
	int r;

	r = c % 10;
	if (c < 0)
		r = -(r);
	_putchar(r + '0');
	return (r);
}
