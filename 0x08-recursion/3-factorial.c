#include "main.h"

/**
 * factorial - Function returns factorial of a given number
 *
 * @n: number to be accessed
 *
 * Return: factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
