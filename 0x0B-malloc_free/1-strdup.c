#include "main.h"
#include <stdlib.h>
/**
 *_strdup - Copies string content
 *@str: Pointer to string variable
 *Return: Returns a pointer to the copied string
 *
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int count = 0;
	
	for (i = 0; str[i] != '\0'; i++)
		count ++;
	s = malloc(count * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	return (s);

}
