#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
/**
 * pis_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 or 0
 */
int pis_palindrome(char *s)
{
	if (*s == _print_rev_recursion(s + 1))
		return (1);

	else
		return (0);
}
/**
* is_palindrome -  returns 1 if a string is a palindrome and 0 if not
* @s: string
* Return: 1 or 0
*/
int is_palindrome(char *s)
{
	return(pis_palindrome(s, 1));
}
