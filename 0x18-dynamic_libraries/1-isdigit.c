#include "main.h"
/**
 *  _isdigit - Chechs for numerals
 *  Return: 1 if true 0 if false
 *  @c: variable
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
