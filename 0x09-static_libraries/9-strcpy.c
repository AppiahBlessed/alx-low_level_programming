#include "main.h"
/**
 *_strcpy - Copies string
 *@dest: Array to accept
 *@src: Array to send
 *Return: Returns copied
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
