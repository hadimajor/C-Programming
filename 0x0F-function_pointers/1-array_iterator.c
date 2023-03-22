#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function given as parameter
 * on elements of array
 *
 * @array: array being passed
 * @size: size of array
 * @action: pointer to function to be used
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	void (*p)(int);

	p = action;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		p(array[i]);
}
