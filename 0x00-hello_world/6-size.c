#include <stdio.h>
/**
 * main- main entry
 *
 * Return: Always (0)success
 */
int main(void)
{
	printf("Size of char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)", sizeof(long int));
	printf("Size of long long int: %i byte(s)", sizeof(long long int));
	printf("Size of a float: %i byte(s)", sizeof(float));
	return (0);

}
