#include "main.h"
/**
*print_rev - Prints string in reverse
*@s: Variable pointer
*/
void print_rev(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
