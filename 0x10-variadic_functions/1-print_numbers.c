#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *
 *
 *
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
		if (separator == NULL)
		{
		 printf(" ");
		}
			else
			{
				if (i != n-1)
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
