#include "main.h"
/**
 *string_toupper - Change to upper case
 *@tr: Pointer to string
 *Return: Returns upper case string
 */
char *string_toupper(char *tr)
{
	int i;

	i = 0;
	while (tr[i] != '\0')
	{
		if (tr[i] >= 'a' && tr[i] <= 'z')
			tr[i] = tr[i] - 32;
		i++;
	}
	return (tr);
}
