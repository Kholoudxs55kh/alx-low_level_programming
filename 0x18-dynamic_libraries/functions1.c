#include "main.h"
/**
 * _abs - a function to make sure the int is positive
 * @n: an integer
 * Return: positive value
 */
int _abs(int n)
{
	    if (n < 0) {
        return -n;
    } else {
        return n;
    }
}
/**
 *_islower - checks for lowercase character
 *
 *@c: The character to check
 *
 *Return: 1 for lower case,0 for others
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
/**
 *_isalpha - checks for characters
 *
 *@c: The character to check
 *
 *Return: 1 for characters ,0 for others
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _isupper - prints if the character is
 * upper case or not.
 *@c: the containing var
 *
 * Return: 0 if lowercase ,1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
