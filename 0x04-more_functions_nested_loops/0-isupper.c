#include "main.h"
/**
 * _isupper - Checs whether the file is in uppercase or not
 *Return: 1 for True and 0 for false
 *@c: variable
 */
int _isupper(int c)
{
		if (c >= 65 && c <= 95)
		{
			return (1);
		}

		else
		{
			return (0);
		}
}
