#include "main.h"
/**
 * _strcpy - copies the string
 *
 * @src: pointer that contains the string
 * @dest: pointer that will has the copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int k = 0;

while (src[k] != '\0')
{
dest[k] = src[k];
i++;
}
dest[k] = '\0';

return (dest);
}
