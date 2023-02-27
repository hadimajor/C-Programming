#include "main.h"

/**
 * swap_int - Function that swaps the values of two intagers
 *
 * @a: first intager to swap
 * @b: another intager to swap
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
