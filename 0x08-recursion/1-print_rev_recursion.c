#include "main.h"
/**
 *_print_rev_recursion - Prints string in reverse
 *@s: Variable pointer
 *
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);

}
