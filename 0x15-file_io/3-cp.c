#include "main.h"
/**
 * main - the program
 * @argc: the arguements
 * @argv: the inputs
 * Return: .
 */
int main(int argc, char *argv[])
{
    int fd1, fd2, cls, clss, buf = 1024, buff;
    char *file_from = argv[1], *file_to = argv[2], buffer[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
        exit(97);
    }
    fd1 = open(file_from, O_WRONLY);
    fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
    if (!fd1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s \n", file_from);
        exit(98);
    }
    if (!fd2)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s \n", file_to);
        exit(99);
    }
    while (buf == 1024)
    {
        buf = read(fd1, buffer, 1024);
        (!buf)? /*code*/;
        buff = write(fd2, buffer, buf);
        (!buff)? /*code*/;
    }
    cls = close(fd1);
    clss = close(fd2);
    if (!cls)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
        exit(100);
    }
    if (!clss)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
        exit(100);
    }
    close(fd1);
    close(fd2);
    return (0);
}