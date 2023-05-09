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
	int fdp, count = 0;
	int res = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
		{
			count++;/*Length of text_content*/
		}
	}
	fdp = open(filename, O_WRONLY | O_APPEND);/*Write for already existing file*/
	res = write(fdp, text_content, count);/*Res is the descriptor*/
	if (fdp == 0 || res == -1)/*If any fal*/
	{
		return (-1);
	}
	close(fdp);
	return (1);

}
