#include "main.h"
/**
 * _isalpha - Checks to see if c is an alphabet
 *  Return: 1 if true
 *  @c: hold the variable input
 *
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
		return (1);
}

	else
{
		return (0);
}
}
