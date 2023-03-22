#include "main.h"
/**
 * _islower - checks if letter is in small caps
 *
 * Reuturn: 1 if true
 * Return: 0 if false
 * @c: variable declared
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
