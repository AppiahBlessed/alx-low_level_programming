#include "main.h"
#include <stdlib.h>
/**
 *create_array - Creates an array of strings containing c
 *@size: Determkines the size of the array
 *@c: Character containing string
 *Return: Returns pointer to string
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	for (i = 0; i <= size; i++)
		s[i] = c;
	free(s);
	return (s);
}
