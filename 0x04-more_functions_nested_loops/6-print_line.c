#include "main.h"

/**
 * print_line - Program that draws a straight line in the terminal
 * @n: number of times character _ should print
 *
 * Return: 0 (Success)
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			putchar('_');
			a++;
		}
	putchar('\n');
	}
	else
		putchar('\n');
}
