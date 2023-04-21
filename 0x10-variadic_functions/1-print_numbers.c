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
	{/*Print nothing if character is null*/
		if (separator == NULL)
		{
			printf(" ");
		}
			else
			{
				if (i != n - 1)/*Exclude seperator from last element*/
				{
					printf("%d%s", va_arg(list, int), separator);
				}
					else
					{
						printf("%d\n", va_arg(list, int));
					}
			}

	}
	va_end(list);/*End macro*/

}
