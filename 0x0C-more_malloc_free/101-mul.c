#include "main.h"
#include <stdlib.h>

/**
 * main - Program multiplies two positive numbers
 *
 * @argc: counter/size of the argv array
 * @argv: array containing arguments to be accessed
 *
 * Return: Always 0 (Success)
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
