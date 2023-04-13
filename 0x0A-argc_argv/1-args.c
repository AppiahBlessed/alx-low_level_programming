#include <stdio.h>
/**
 *main - Function prints argc
 *@argc: Number of arguements
 *@argv: Arguements array
 *Return: Returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	/*Assiggn str to strore value of first arry*/
	char *str = argv[0];
	/*Create condition that uses argv*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != '\0')
			/*Just there to complete if statement*/
			argc = argc;
	}
	printf("%d\n", argc);
	return (0);
}
