#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * strtow - concatenates arguments.
 *
 * @str: string to be split.
 *
 * Return: a pointer to array of string.
 */

char **strtow(char *str)
{
	char *array = NULL;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);

	array = malloc((i + j + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		array[k] = str[k];

	i = k;
	for (k = 0; k < j; k++)
	{
		array[i] = str[k];
		i++;
	}
	array[i] = '\0';
	return (NULL);
}
