#include "main.h"
/**
 * exit97 - .
 * @argc: .
 * Return: 0
 */
int exit97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
}
/**
 * FunName - .
 * @fd1: .
 * @fd2: .
 * @argv: .
 * Return: .
 */
int FunName(int fd1, int fd2, char **argv)
{
	char *file_from, *file_to;

	file_from = argv[1];
	file_to = argv[2];
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0644);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	return (0);
}
/**
 * insideif - .
 * @fd1: .
 * @fd2: .
 * Return: .
 */
int insideif(int fd1, int fd2)
{
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	close(fd1);
	close(fd2);
	return (0);
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

	exit97(argc);
	file_from = argv[1];
	file_to = argv[2];
	fd1 = open(file_from, O_RDONLY);
	FunName(0, -1, argv);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	FunName(-1, 0, argv);
	while ((buf = read(fd1, buffer, 1024)))
	{

		if ((buf == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			insideif(-1, 0);
			insideif(0, -1);
			exit(98);
		}
		if (buf != write(fd2, buffer, buf))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			insideif(-1, 0);
			insideif(0, -1);
			exit(99);
		}
	}
	insideif(-1, 0);
	insideif(0, -1);
	return (0);
}
