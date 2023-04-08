#include "main.h"
/**
 *prime - Checks for prime number
 *@n: Input variable integer
 *@v: The iterator
 *Return: Returns recursion with reduction in iterator
 */
int prime(int n, int v)
{
	if (v <= 1)
		return (1);
	if (n % v == 0)
		return (0);
	return (prime(n, v - 1));

}
/**
 *is_prime_number - Checks for prime number
 *@n: Variable input integer
 *Return: Return prime
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));


}
