#include <stdio.h>
/**
 *main- Function passed arguments argc and argv
 *@argc: Number of arguements
 *@argv: Array of content of arguement
 *Return: Returns 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s", argv[0]);
		printf("\n");
	}
	return (0);

}
