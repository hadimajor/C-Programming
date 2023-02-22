#include "main.h"

/**
 * print_alphabet - writes the character c to stdout
 *
 * Return: void
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}

