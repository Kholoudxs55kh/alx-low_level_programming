#include "main.h"
/**
 * main - the program
 * @argc: the arguements
 * @argv: the inputs
 * Return: .
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, buf, buff;
	char *file_from = argv[1], *file_to = argv[2], buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	buf = read(fd1, buffer, 1024);
	buff = write(fd2, buffer, buf);
	while (buf)
	{
		if ((fd1 == -1) || (buf == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);	
			close(fd1);
			exit(98);
		}
		if ((fd2 == -1) || (buff == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd2);
			exit(99);
		}
	}
	if ((close(fd1)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if ((close(fd2)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
