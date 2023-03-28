#include "main.h"
/**
 *print_array - Prints array items
 *
 * @a: Pointer to array value
 * @n: Numberof elements in array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else if (i == n - 1)
			printf("%d", a[i]);
	}
	printf("\n");
}
