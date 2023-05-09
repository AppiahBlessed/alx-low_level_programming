#include "main.h"
/**
 *append_text_to_file - Append some text to file
 *@filename: Name of file to handle
 *@text_content: Content to append
 *Return: Returns -1 on failure and 1 on success
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdp, count, i, res = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			count++;/*Length of text_content*/
		}
	}
		else
			return (-1);
	fdp = open(filename, O_WRONLY | O_APPEND);/*Write for already existing file*/
	res = write(fdp, text_content, count);/*Res is the descriptor*/
	if (fdp == -1 || res == -1)/*If any fal*/
	{
		return (-1);
	}
		else
			return (1);
	close(fdp);
	return (1);

}
