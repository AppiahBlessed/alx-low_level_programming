#include "main.h"
/**
 *puts2 - Prints every other number
 *@str: Variable pointer
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{	
		if (str[i] != '\0')
		_putchar(str[i]);
		i++;
	}
}
