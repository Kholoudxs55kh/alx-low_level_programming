#include "main.h"
/**
* _main - helper func
*@argc: .
*@argv: .
*Return: .
*/
void _main(int argc, char **argv)
{
	int fd1, fd2;
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
}
/**
* closse - .
* @fd1: .
* @fd2: .
* Return: .
*/
void closse(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - the program
 * @argc: the arguements
 * @argv: the inputs
 * Return: exit value or .
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, buf;
	char *file_from, *file_to, buffer[1024];

	_main(argc, argv);
	file_from = argv[1];
	file_to = argv[2];
	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	while ((buf = read(fd1, buffer, 1024)))
	{
		if ((buf == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			closse(fd2);
			closse(fd1);
			exit(98);
	}
		if (buf != write(fd2, buffer, buf))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			closse(fd2);
			closse(fd1);
			exit(99);
		}
	closse(fd2);
	closse(fd1);
	return (0);
}
