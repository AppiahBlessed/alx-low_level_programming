#include "main.h"
/**
 *_strstr - _strstr(
 *@haystack: haystack,
 *@needle: needle
 *Return: Null
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
        	char *second = needle;
	
		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}
	
		if (*second == '\0')	
			return (haystack);
	}
	return (NULL);

}
