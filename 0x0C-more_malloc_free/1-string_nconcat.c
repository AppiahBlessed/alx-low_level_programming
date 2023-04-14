#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat - Concatenates string
 *@s1: First string holder
 *@s2: Second string holder
 *@n: Number of bytes to cut
 *Return: Returns destination pointer
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{/*Initialize variables*/
	unsigned int i;
	unsigned int count = 0;
	unsigned int count2 = 0;
	char *dest;
/*Loop through s1 to get legnth*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		count++;
	} /*Loop through s2 to get string legnth*/
	for (i = 0; s2[i] != '\0'; i++)
	{
		count2++;
	}
	dest = malloc(n + count * sizeof(char));
	if (dest == NULL)/*Return NULL when errors*/
	{
		return (NULL);
	} /*Assign string contents in s1 to dest*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		dest[i] = s1[i];
	} /*Append full all of s2 to dest*/
	if (n > count2)
	{
		for (i = 0; i <= count; i++)
			dest[count + i] = s2[i];
	}
	else/*Append n bytes of s2 to dest*/
	{
		for (i = 0; i < n; i++)
		{
			dest[count + i] = s2[i];
		}
	} /*Return pointer to string*/
	return (dest);
}
