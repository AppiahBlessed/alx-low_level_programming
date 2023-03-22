#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -  Print values from n to 98
 *@n: variable
 */

void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		if (n != 98)
		{
		printf("%d", n);
		printf(", ");
		}
		else 
		{
			printf("%d", n);
		}
	}

	printf("\n");

}
