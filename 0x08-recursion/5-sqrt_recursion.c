#include "main.h"
/**
 * sqrt_ - Function find the number that gueses square root
 *@n: The number we are finding its square root
 *@v: The iterator
 *Return: Recursion function
 */
int sqrt_(int n, int v)
{
	if (v * v > n)
		return (-1);
	if (v * v == n)
		return (v);
	return (sqrt_(n, v + 1));
}

/**
 *_sqrt_recursion - Finds the square root of the number n
 *@n: Number to input
 *Return: Function sqrt_
 *
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_(n, 0));


}
