#include "main.h"
/**
 *
 *
 *
 */
char *string_toupper(char *tr)
{
	int i;

	for (i = 0; tr[i] != '\0'; i++ )
	{
		if (tr[i] >= 'a' && tr[i] <= 'z')
			tr[i] = tr[i] - 32;

	}
	return (tr);
}
