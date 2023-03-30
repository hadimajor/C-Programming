#include "main.h"

/**
 * primeFinder - checks if a number is prime
 *
 * @a: number to check
 * @b: numbers to be accessed
 *
 * Return: whether the number is prime or not
 */
int primeFinder(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primeFinder(a, b + 1);

	return (1);
}
/**
 * is_prime_number - Checks if a number is prime or not
 *
 * @n: number to check
 *
 * Return: 0 if number is not prime, 1 if it's prime
 */
int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}
