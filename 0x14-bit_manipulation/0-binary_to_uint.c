#include "main.h"
/**
 *binary_to_uint - Converts binary to integer
 *@b: Holds string containing integer
 *Return: Returns the converted int
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int i;

	if (b == NULL)/*If b is NULL*/
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)/*Loop through string*/
	{
		if (b[i] != '0' && b[i] != '1')/*If number is not in base two*/
		{
			return (0);
		}
			else
			{
				converted = converted << 1;/*Shift once left means multiply by 2*/
				converted = converted + (b[i] - '0');/*Convert in ascii to integer*/
			}
	}
	return (converted);
}
