#include "main.h"
/**
 *_strncpy - Copies string
 *
 * @dest: Destination pointer
 * @src: Source pointer
 * @n: Variable number
 * Return: Destination pointer
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n; i++)
		dest[i] = src[i];
	return (dest);
}
