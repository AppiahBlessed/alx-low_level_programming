#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - Sums all arguements passed
 *@n: serves as mandatory value
 *Return: returns result as the sum of values
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list list;

	/*Return 0 if first parameter is 0*/
	if (n == 0)
	{
		return (0);
	}
	/*Start point*/
	va_start(list, n);
	/*Loop through and sum arguements*/
	for (i = 0; i < n; i++)
	{
		result = va_arg(list, int) + result;
	}
	/*Requires a closing macro*/
	va_end(list);
	return (result);
}
