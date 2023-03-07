#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - Function that searches a string for any set of bytes
 *
 * @s: to string to access
 * @accept: the bytes to search for
 *
 * Return: a pointer to the byte in @s that matches one of the bytes in @accept
 * or returns NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
