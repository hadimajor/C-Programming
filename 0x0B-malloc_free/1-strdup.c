#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly
 * allocated space in memory.
 *
 * @str: String to copy
 *
 * Return: pointer to duplicated string, NULL if @str is NULL
 * or insufficient memory
 */

char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ar = malloc(sizeof(char) * (i + 1));

	if (ar == NULL)
		return (NULL);
	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}
	ar[j + 1] = 0;
	return (ar);
}
