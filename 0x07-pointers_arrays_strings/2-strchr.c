#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: string to be accessed
 * @c: first occurence of the character
 *
 * Return: returns a pointer to @c in the string
 * @s: Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

