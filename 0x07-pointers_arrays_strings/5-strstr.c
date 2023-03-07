#include "main.h"
#include <stdlib.h>

/**
 * _strstr - Function that locates a substring
 *
 * @haystack: string to be assecced
 * @needle: first occurence of substring to be searched
 *
 * Return: pointer to the beginning of located substring
 * or return NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
