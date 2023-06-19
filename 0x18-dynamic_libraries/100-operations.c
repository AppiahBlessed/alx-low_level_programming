#include <stdio.h>
/**
 *add - Adds two numbers
 *@a: First value
 *@b: Second value
 *Return: Returns the result
 *
 */
int add(int a, int b)
{
	int result;

	result = (a) + (b);
	return (result);
}
/**
 *sub - Subtracts two numbers
 *@a: First value
 *@b: Second value
 *Return: Returns the result
 */
int sub(int a, int b)
{
	int result;

	result = (a) - (b);
	return (result);
}
/**
 *mul - Multiplies two numbers
 *@b: Second value
 *@a: First value
 *Return: Returns the result
 */

int mul(int a, int b)
{
	int result;

	result = (a) * (b);
	return (result);
}
/**
 *div - Divides two numbers
 *@b: Second value
 *@a: First value
 *Return: Returns the result
 */
int div(int a, int b)
{
	int result;

	result = (a) / (b);
	return (result);
}
/**
 *mod - Calculates modulo of two numbers
 *@a: First value
 *@b: Second value
 *Return: Returns the result
 */

int mod(int a, int b)
{
	int result;

	result = (a) % (b);
	return (result);
}
