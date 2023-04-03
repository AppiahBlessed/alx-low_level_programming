#include "main.h"
/**
 *_memset - Memory check
 *@s: String variable
 *@b: Constant
 *@n: Number of times
 *Return: String
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);

}
