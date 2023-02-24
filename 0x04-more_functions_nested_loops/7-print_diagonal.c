#include "main.h"

/**
 * print_diagonal - Program that draws a diagonal line on the terminal
 * @n: number of times character \ will be printed
 *
 * Return: 0 (Success)
 */
void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
	{
		while (a < n)
		{
		while (b < a)
		{
			putchar(' ');
			b++;
		}
		a++;
		b = 0;
		putchar ('\\');
		putchar ('\n');
		}
	}
	else
		putchar('\n');
}
