#include "main.h"

/**
 * _isdigit - Program that checks for a digit input
 * @c: input
 *
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isdigit(int c)
{

	if ((c >= '0') != (c >= 'a'))
		return (1);
	else
		return (0);
}
