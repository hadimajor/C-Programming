#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to be accessed
 *
 * Return: integer displaying length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - checks if a string is palindrome
 * @str: string to be accessed
 * @i: left index
 * @j: right index
 *
 * Return: 1 if palindrome 0 if otherwise
 */
int pal_checker(char *str, int i, int j)
{
	if (str[i] == str[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(str, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - Function checks if a string is palindrome
 *
 * @s: string to be accessed
 *
 * Return: 1 if it's palindrome, 2 if it's not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (pal_checker(s, i, length));
}
