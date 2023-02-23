#include "main.h"
/**
 * print_numbers -Program that prints numbers from 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
