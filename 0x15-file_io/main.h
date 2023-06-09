#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define O_RDONLY 00
#define O_WRONLY 01
#define O_RDWR 02

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void exit97(int argc);
void FunName(int fd1, int fd2, char **argv);
void insideif(int fd1, int fd2);
void closse(int fd);
void _main(int argc, char **argv);
int main(int argc, char *argv[]);

#endif
