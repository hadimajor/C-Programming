#include "function_pointers.h"

/**
 * int_index - Function searches for an integer
 *
 * @array: array to access
 * @size: number of elements in the array
 * @cmp: pointer to the fxn to be used to compare values
 *
 * Return: index of first element for which cmp fxn doesn't return 0 &&
 * if no element matches -1 &&
 * if size <= 0, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*p)(int);

	p = cmp;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (p(array[i]) && array[i] != 0)
			break;
		if (i == size - 1)
			return (-1);
	}
	return (i);
}
