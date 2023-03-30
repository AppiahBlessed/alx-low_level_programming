#include "main.h"
/**
 *rot13 - Rot-13 encoding
 *@str: String value
 *Return: Encoded string
 */
char *rot13(char *str)
{
	int i;
	int j;
	char regular[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++) /* Iterate over the regular set*/
		{
			if (str[i] == regular[j])
			{
				str[i] = encoded[j];
				break;
			}
		}
	}
	return (str);

}
