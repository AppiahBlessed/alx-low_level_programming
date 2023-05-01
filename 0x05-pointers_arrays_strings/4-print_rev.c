#include "main.h"
/**
*rev_string - Prints string in reverse
*@s: Variable pointer
*/
void rev_string(char *s)
{
	int num = 0;
	int i;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	s--;
	for (i = num; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}
