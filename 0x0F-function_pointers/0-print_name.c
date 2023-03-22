#include "function_pointers.h"

/**
 * print_name - Function prints a name
 *
 * @name: name to print
 * @f: function to receive name to print
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
