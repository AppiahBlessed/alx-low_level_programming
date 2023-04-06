#include "main.h"
/**
 *factorial - Computes factorial of given number n
 *@n: Integer variable
 *Return: Returns res as the final result, -1 for negative and 1 for n=0
 */
int factorial(int n)
{
	int res;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		res = n * factorial(n - 1);
	}
	return (res);

}
