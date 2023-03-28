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
		_putchar(str[i]);
		i++;
	}
}
