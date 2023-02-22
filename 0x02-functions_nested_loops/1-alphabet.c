#include <unistdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c:
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

