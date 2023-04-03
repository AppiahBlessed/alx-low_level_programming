#include "main.h"
/**
 *_memset - Memory check
 *@s: String variable
 *@b: Constant
 *@n: Number of times
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[1] = b;
	return(s);

}
