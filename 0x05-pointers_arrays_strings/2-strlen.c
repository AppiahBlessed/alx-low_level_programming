#include "main.h"
/**
 *_strlen - Lenght of any string
 *@s: Variable pointer to string
 *Return: Returns the length of string
 */
int _strlen(char *s)
{
	int i;
	int lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}
	return (lenght);
}
