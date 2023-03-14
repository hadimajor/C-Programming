#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if noting passed, 1 if ERROR contain symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int a, c;
	int n = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (c = 0; argv[a][c] != '\0'; c++)
		{
			if (argv[a][c] < '0' || argv[a][c] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		n += atoi(argv[a]);
	}
	printf("%d\n", n);
	return (0);
}
