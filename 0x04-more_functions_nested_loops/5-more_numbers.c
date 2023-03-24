#include "main.h"
/**
 * more_numbers - Print Numerals to 14
 *
 */
void more_numbers(void)
{
	int i, ii;

	for (ii = 0; ii < 10; ii++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
			_putchar('\n');
	}
}
