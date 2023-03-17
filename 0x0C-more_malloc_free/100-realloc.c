#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function realocates memory block using malloc and free
 *
 * malloc: malloc(old_size)
 * @ptr: pointer to memory previously allocated
 * @new_size: new size in bytes of new memory block
 * @old_size: size in bytes of allocated space fot @ptr
 *
 * Return: pointer is @new_size == @old_size,
 * NULL if @new_size == 0 && pointer != NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar;
	char *oldar = ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ar = malloc(new_size);
		return (ar);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ar = malloc(new_size);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		ar[i] = oldar[i];

	free(oldar);
	return (ar);
}
