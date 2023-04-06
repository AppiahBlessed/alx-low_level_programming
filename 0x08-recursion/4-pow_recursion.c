#include "main.h"
/**
 *_pow_recursion - Computes power
 *@x: Integer value 1
 *@y: Integer power 2
 *Return: Res as result
 *
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else if (y > 1)
		res = x * _pow_recursion(x, y - 1);
	return (res);

}
