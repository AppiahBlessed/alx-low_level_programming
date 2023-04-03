#include "main.h"
/**
 *_strpbrk - Function
 *@s: Pointer
 *@accept: Pointer
 *Return: Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, num;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (num = 0; accept[num] != '\0'; num++)
		{
			if (s[i] == accept[num])
				return (s + i);
		}


	}
	return (NULL);
}
