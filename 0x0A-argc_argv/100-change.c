#include <stdio.h>
#include <stdlib.h>
/**
 *main - Gives minimum change
 *@argc: Number of arguements
 *@argv: Pointer array of arguements
 *Return: Returns 0 onsuccess
 */
int main(int argc, char *argv[])
{
	int cents;
	int quarters;
	int nickels;
	int dimes;
	int twos;
	int ones;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	quarters = cents / 25;
	cents = cents % 25;
	dimes = cents / 10;
	cents = cents % 10;
	nickels = cents / 5;
	cents = cents % 5;
	twos = cents / 2;
	cents = cents % 2;
	ones = cents;
	printf("%d\n", quarters + dimes + nickels + twos + ones);
	return (0);
}
