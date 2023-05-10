#include "main.h"
/**
 * egzit_ - exits
 * @e97: .
 * @e98: .
 * @e99: .
 * @ef100: .
 * @es100: .
 * Return: .
 */
int egzit(int argc)
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
}
int fd(int fd1, int fd2){
	if (fd1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd);
		exit(98);
	}
	if (fd2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd);
		exit(99);
	}
}
int kloze(int cls1, int cls2)
{

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

	egzit(argc);
	file_from = argv[1];
	file_to = argv[2];
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		fd(1, 0);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
		fd(0, 1);

	while ((buf = read(fd1, buffer, 1024)))
	{
		if ((buf == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			if (close(fd2) == -1)
				kloze(0, 1);
			if (close(fd1) == -1)
				kloze(1, 0)
					exit(98);
		}
		if (buf != write(fd2, buffer, buf))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			if (close(fd2) == -1)
				kloze(0, 1);
			if (close(fd1) == -1)
				kloze(1, 0);
			exit(99);
		}
	}
	if (close(fd2) == -1)
		kloze(0, 1);
	if (close(fd1) == -1)
		kloze(1, 0);
	return (0);
}
