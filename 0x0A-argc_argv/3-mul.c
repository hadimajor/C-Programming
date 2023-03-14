#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that multiplies two numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * return:  Always 0 (success), 1 (ERROR)
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%i\n", mul);

	return (0);
}
