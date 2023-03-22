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
		printf("%d", n);
		printf(", ");
	}
	printf("\n");

}
