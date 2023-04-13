#include <stdio.h>
#include <stdlib.h>
/**
 *main- Function computes integer arguements
 *@argc: Number of allowed arguements
 *@argv: Pointer to arguements array
 *Return: Returns 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)/*Checkk for number of arguements*/
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);/*Using atoi to convert char to int*/
	b = atoi(argv[2]);
	result = a * b;/*Multiplies integers*/
	printf("%d\n", result);/*Print result with new line*/
	return (0);
}
