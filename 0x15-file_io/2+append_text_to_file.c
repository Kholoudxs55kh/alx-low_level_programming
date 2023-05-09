#include "main.h"
/**
 * append_text_to_file - creates a file
 * @filename: file name
 * @text_content: NULL string to write to
 * Return: .
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, x;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (!file)
		return (-1);

    if (!text_content)
		text_content = "";

	x = write(file, text_content, strlen(text_content));

	if (!x)
		return (-1);

	close(file);

	return (1);

}
