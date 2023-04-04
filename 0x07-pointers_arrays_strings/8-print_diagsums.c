#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - print_diagsums(
 *@a: Pointer
 *@size: Pointer
 */
void print_diagsums(int *a, int size)
{
	int i, j, num1, num2;

	num1 = 0;
	num2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		num1 = num1 + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		num2 = num2 + a[j];
	printf("%d, %d\n", num1, num2);


}
