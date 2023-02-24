#include "main.h"

/**
 * print_triangle - Program that prints a triangle followed by a new line
 *
 * @size: is the size of the triangle
 *
 * Return: 0 (Success)
 */

void print_triangle(int size)
{
	int x, y = 0;
	int space;

	if (size > 0)
	{
		while (y < size)
		{
			space = size - y - 1;
			while (x < size)
			{
				if (space > x)
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
				x++;
			}
			y++;
			x = 0;
			putchar ('\n');
		}
	}
	else
		putchar('\n');
}
