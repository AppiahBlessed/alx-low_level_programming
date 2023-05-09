#include "main.h"
/**
 *create_file - Creates file with read and write permissions
 *@filename: Name of file to handle
 *@text_content: Text to write
 *Return: -1 on failure and 1 on success
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fdp, i, count = 0;
	int res;

	if (filename == NULL)/*Error with name*/
	{
		return (-1);
	}
	if (text_content != NULL)/*To get the length of the text_content*/
	{
		for (i = 0; text_content[i] != '\0'; i++)
			count++;
	}

	fdp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600/*Octa permission*/);
	res = write(fdp, text_content, count);/*Store return value of function*/
	if (res == -1 || fdp == 0)/*Write call failed*/
	{
		return (-1);
	}
	close(fdp);
	return (1);
}
