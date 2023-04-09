#include "main.h"
/**
 *_memcpy - Copies string to dest
 *@dest: Destination string variable pointer
 *@src: Source string pointer
 *@n: number limit
 *Return: Returns value of dest when successful
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
