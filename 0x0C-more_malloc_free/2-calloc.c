#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function allocates memory of array using calloc
 *
 * @nmemb: number of elements in the array
 * @size: size of th element type
 *
 * Return: a pointer to the allocated memory,
 * NULL if nmemb or size is 0 or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ar = malloc(size * nmemb);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ar[i] = 0;

	return (ar);
}
