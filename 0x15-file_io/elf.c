#include <stdio.h>
#include "main.h"
/**
 * main - .
 * Return: .
 */
int main(void)
{

	ssize_t nletters;
	char *filename;

	filename = "test_0.txt";
	
	nletters = 0;
	printf("-> %s file created\n", filename);
	printf("-> %s file written\n", filename);
	nletters = read_textfile(filename, 1024);
	printf("-> %s file read\n", filename);
	printf("-> %ld bytes read\n", nletters);
	printf("-> %s file appended\n", filename);
	nletters = append_text_to_file(filename, "\nI love C!");
	printf("-> %ld bytes appended\n", nletters);
	nletters = read_textfile(filename, 1024);
	printf("-> %ld bytes read\n", nletters);
    return (0);
}