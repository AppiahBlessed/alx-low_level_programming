#include "main.h"
/*
 * print_square -Prints squares
 * @size: skize of square
 *
 */
void print_square(int size)
{
	int i;
	int k;

	 if (size <= 0)
		 {
			 _putchar('\n');
		 }
	else
	{
		for (i = 1; i <= size; i++)
		{

			for (k = 2; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	
	}
}
