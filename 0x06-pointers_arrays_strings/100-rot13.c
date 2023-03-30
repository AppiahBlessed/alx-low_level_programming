#include "main.h"
/**
 *
 *
 *
 */
char *rot13(char *str)
{
	int i;
	int j;
	char regular[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";/* declare array to hold regular alphabet string*/
	char encoded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";/* declare array to hold rot-13 replica string*/

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++) /* Iterate over the regular set*/
		{
			if (str[i] == regular[j]) /* Check for similarkities and replace with rot-13*/
			{
				str[i] = encoded[j];
				break;
			}
		}
	}
	return (str);

}
