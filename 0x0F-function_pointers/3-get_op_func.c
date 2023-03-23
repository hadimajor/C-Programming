#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - Selects correct fxn to perform operation
 *
 * @s: operator passed to the fxn
 *
 * Return: nothing
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
