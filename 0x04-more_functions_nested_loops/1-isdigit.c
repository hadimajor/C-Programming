#include "main.h"

/**
 * _isdigit - Program that checks if input is digit
 *  @c: input
 *
 *  Return: 1 if is digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

		return (1);
	else
		return (0);
}
