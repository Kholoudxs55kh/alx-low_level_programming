#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 *
 * @dest: contains a string
 * @src: contains a string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(*dest, *src);

return (dest);
}
