#include "main.h"
/**
 *puts_half - Function that splits string
 *@str: String variable
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (len % 2 == 0)
		{
		for (i = len / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
		}
	else if (len % 2 != 0)
	{
		for (i = (len - 2) / 2 ; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
