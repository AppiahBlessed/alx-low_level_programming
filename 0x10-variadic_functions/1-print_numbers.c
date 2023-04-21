#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers- Prints numbers with a seperation charater
 *@separator: Seperator char
 *@n: Expected number of arguements
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	/*Start variadic*/
	va_start(list, n);
	/*Loop to get elements or arguements*/
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(list, int), separator);
		if (i == n-1 && separator != NULL)
		{
			printf("%d\n", va_arg(list, int));
		}

	}
	va_end(list);/*End macro*/

}
