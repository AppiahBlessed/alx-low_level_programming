#include "main.h"
/**
 *read_textfile - Read content of file and write it to standard output
 *@filename: Contains the name of the file
 *@letters: Specifies the reach of chars to print
 *Return: Returns the number of bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fptr;/*To manipulate files*/
	char *s_holder;/*Hold string*/
	ssize_t count_r, count_w;

	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	s_holder = malloc(sizeof(char) * letters);
	if (s_holder == NULL)
	{
		return (0);
	}
	count_r = read(fptr, s_holder, letters);
	count_w = write(STDOUT_FILENO, s_holder, count_r);
	if (count_r != count_w)
		return (0);
	free(s_holder);
	close(fptr);

	return (count_w);
}
