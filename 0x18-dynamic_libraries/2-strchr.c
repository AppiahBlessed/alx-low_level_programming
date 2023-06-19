#include "main.h"
/**
 * _strchr - Finds characters
 *@s: String pointer
 *@c: String variable
 *Return: Null if otherwise
 */
char *_strchr(char *s, char c)
{
	int i;
	char j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			for (j = c; j != '\0'; j++)
			{
				return (s + i);
			}
		}

	}
	return (NULL);
}
