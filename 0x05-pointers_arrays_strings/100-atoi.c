#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string pointer
 * Return: num
 */
int _atoi(char *s)
{
	int i, j, k, len, l, num;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	l = 0;
	num = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && l == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (j % 2)
				num = -num;
			k = k * 10 + num;
			l = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			l = 0;
		}
		i++;
	}

	if (l == 0)
		return (0);

	return (k);
}

