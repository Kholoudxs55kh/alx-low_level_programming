#include "main.h"
/**
 * egzit_ - exits
 * @argc: .
 * @fd1: .
 * @fd2: .
 * @cls1: .
 * @cls2: .
 * @argv: .
 * Return: .
 */
int egzit(int argc, int fd1, int fd2, int cls1, int cls2, char *argv[])
{
	cls1 = (close(fd1) == -1);
	cls2 = (close(fd2) == -1);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (fd1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *argv);
		exit(98);
	}
	if (fd2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", *argv);
		exit(99);
	}
	if (cls1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	if (cls2)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
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

	(void)argc;
	egzit(1, 0, 0, 0, 0, argv);
	file_from = argv[1];
	file_to = argv[2];
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		egzit(0, 1, 0, 0, 0, argv);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
		egzit(0, 0, 1, 0, 0, argv);
	while ((buf = read(fd1, buffer, 1024)))
	{
		if ((buf == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			if (close(fd2) == -1)
				egzit(0, 0, 0, 0, 1, argv);
			if (close(fd1) == -1)
				egzit(0, 0, 0, 1, 0, argv);
			exit(98);
		}
		if (buf != write(fd2, buffer, buf))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			if (close(fd2) == -1)
				egzit(0, 0, 0, 0, 1, argv);
			if (close(fd1) == -1)
				egzit(0, 0, 0, 1, 0, argv);
			exit(99);
		}
	}
	if (close(fd2) == -1)
		egzit(0, 0, 0, 0, 1, argv);
	if (close(fd1) == -1)
		egzit(0, 0, 0, 1, 0, argv);
	return (0);
}
