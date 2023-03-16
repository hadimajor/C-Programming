#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to string @s2
 *
 * Return: a pointer to newly allocated space in memory,
 * and return NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int m, p, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	len = i + j;
	ar = malloc(sizeof(char) * (len + 1));
	if (ar == NULL)
		return (NULL);

	for (p = 0; p < i; p++)
		ar[k++] = s1[p];
	for (m = 0; m < j; m++)
		ar[k++] = s2[m];

	ar[k] = '\0';
	return (ar);
}
