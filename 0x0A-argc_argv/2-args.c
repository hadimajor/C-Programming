#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);

	return (0);
}
