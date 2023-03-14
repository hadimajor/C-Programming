#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars
 *
 * @size: size of the array
 * @c: char to use in initializing the array
 *
 * Return: pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
