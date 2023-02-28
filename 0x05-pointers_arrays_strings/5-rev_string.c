#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Function that reverses a string
 *
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int k;
	int l;

	char t[1000];

	l = strlen(s);

	for (k = l; k > 0; k--)
	{
		t[l - k] = s[k - 1];
	}
	for (k = 0; k < l; k++)
	{
		s[k] = t[k];
	}
}
