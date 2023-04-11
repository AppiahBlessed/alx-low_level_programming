#include "main.h"
#include <stdlib.h>
/**
 *str_concat - Concatenates strings
 *@s1: First string variable pointer
 *@s2: Second string variable pointer
 *Return: Returns dest (s1 + s2)
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int count = 0;
	int count2 = 0;
	char *dest;
	int len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		count++;
	for (i = 0; s2[i] != '\0'; i++)
		count2++;
	len = count + count2 + 1;
	dest = malloc(len * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		dest[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		dest[count + i] = s2[i];
	return (dest);

}
