#include <stdlib.h>
#include <stdio.h>
/**
 *main - Adds arguements
 *@argc: Number of expected arguements
 *@argv: Array of arguements
 *Return: Returns 1 on success
 */
int main(int argc, char *argv[])
{
	int b, a, result;

	if (argc < 1)/*Condition for if only one arguements is passed*/
	{
		printf("0");
	}
	else if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			b = atoi(argv[a]);/*Convert array string to integer and assign to b*/
			if (b > 0)
			{
				result = result + b;/*Cumulative*/
			}
			else/*Create condition to print error is arguement is not int*/
			{
				printf("Error\n");
				return (1);
			}
		}

	}
	printf("%d\n", result);/*Print results*/
	return (0);

}

