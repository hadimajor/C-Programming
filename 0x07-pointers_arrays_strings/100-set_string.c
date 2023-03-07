#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to char
 *
 *
 * @s: The pointer to make change to
 * @to: the value to change the pointer to
 *
 * Return: nothing (Success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
