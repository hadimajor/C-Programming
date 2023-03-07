#include "main.h"
#include <stdlib.h>

/**
 * print_chessboard - Function that prints the chessboard
 *
 * @a: row of array
 * Return: nothing (success)
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				putchar(a[i][j]);
				putchar('\n');
			}
			else
				putchar(a[i][j]);
		}
	}
}
