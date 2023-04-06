#include "main.h"
/**
 *_strlen_recursion - Prints length of string
 *@s: String variable pointer
 *Return: Returns len as lenght of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
		_putchar('\n');
	}
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
