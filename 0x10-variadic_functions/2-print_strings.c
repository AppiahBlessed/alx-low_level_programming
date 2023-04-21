#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - Prints strings passed
 *@separator: Separates strings
 *@n: Numbr of arguements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/*Initialize variables*/
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);
	/*Lets loop*/
	for (i = 0; i < n; i++)
	{
		/**Str to store value of arguement*/
		str = va_arg(list, char*);
		if (str == NULL)/*Print nil if str == NULL*/
		{
			printf("(nil)");
		}
			else
			{
				printf("%s", str);
			}
		if (i < n - 1 && separator != NULL)/*Dont print separator at last arg*/
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");

}
