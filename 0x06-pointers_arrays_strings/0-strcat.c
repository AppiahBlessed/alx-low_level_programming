#include "main.h"
/**
 *_strcat - Concatenates strings
 *@dest: destination
 *@src: source
 *Return: Destination string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int lendest = 0;
	int lensrc = 0;

	for (i = 0; dest[i] != '\0'; i++ )
		lendest++;
	for (i = 0; src[i] != '\0'; i++)
		lensrc++;
	for (i = 0; i <= lensrc; i++)
		dest[lendest + i] = src[i];
	return (dest);
}
