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
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%i\n", mul);

	return (0);
}
