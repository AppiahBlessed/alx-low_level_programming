#include <stdio.h>
/**
 *main - Prints items passed as arguement
 *@argc: Number of arguements
 *@argv: Pointer to array of arguements passed
 *Return: Returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	/*Loop to print contents of argv*/
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
