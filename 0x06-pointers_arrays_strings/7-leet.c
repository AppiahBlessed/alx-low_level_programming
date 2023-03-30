#include "main.h"
/**
 *leet - Leet style encoding
 *@str: String variablke pointer
 *Return: Returns the encoded string str
 *
 */
char *leet(char *str)
{
	int i;
	int j;

	char *a = "aAeEo0tTlL";
	char *b = "4433007711"; /*declare arrays to hold leet replacement*/

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
				str[i] = b[j];
		}
	}
	return (str);
}
