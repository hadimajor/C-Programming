#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function main
 * @argc: size of the argv array
 * @argv: an array containing the program arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
