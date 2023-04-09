#include "main.h"
/**
 *_strspn - Function man strspn
 *@s: String
 *@accept: Accept
 *Return: Returns int
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;
	int i;

	num = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				num++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
			{
			return (num);
			}
		}
		s++;
	}
	return (num);
}
