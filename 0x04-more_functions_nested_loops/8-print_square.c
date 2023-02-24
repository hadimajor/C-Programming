#include "main.h"

/**
 * print_square - Program that prints a square
 * @size: is the size of the square
 *
 * Return: 0 (Success)
 */
void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				putchar('#');
				b++;
			}
		b = 0;
		a++;
		putchar ('\n');
		}
	}
	else
		putchar ('\n');
}
