#include "main.h"
/**
 *_strncat - Concatenates strings
 *@dest: Destination pointer
 *@src: Source string
 *@n: Number of times
 *Return: Dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lendest = 0;
	int lensrc = 0;

	for (i = 0; src[i] != '\0'; i++)
		lensrc++;
	for (i = 0; dest[i] != '\0'; i++)
		lendest++;
	for (i = 0; i < n; i++)
		dest[lendest + i] = src[i];
	return (dest);

}
