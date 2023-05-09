#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: NULL string to write to
 * Return: .
 */
int create_file(const char *filename, char *text_content)
{
	int file, x, k;

    if (text_content)
	    k = strlen(text_content);
		   

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (!file)
		return (-1);


	x = write(file, text_content, k);

	if ((x == -1) || (x == 0))
		return (-1);


	close(file);

	return (1);

}
