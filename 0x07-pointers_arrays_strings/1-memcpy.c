#include "main.h"

/**
 * _memcpy - Function that copies memory area
 *
 * @dest: address of memory to print to
 * @src: address of memory to print from
 * @n: size of memory to print
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
