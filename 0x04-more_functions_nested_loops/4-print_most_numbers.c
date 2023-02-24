#include "main.h"

/**
 * print_most_numbers - Program to print numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != 4)
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
}
