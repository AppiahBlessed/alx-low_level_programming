#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -  Print values from n to 98
 *@n: variable
 */

void print_to_98(int n)
{
	if (n >= 0 && n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			printf(", ")
		}
			printf("\n")
	}
	else if (n < 0)

	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			printf(", ");
		}
			printf("\n")
	}
	else if (n > 0)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
		}
	}
		printf("\n");
	else if (n == 98)
		printf("%d", n)
		printf(", ");
}
