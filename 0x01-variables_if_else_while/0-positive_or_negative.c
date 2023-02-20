#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main: Entry point
 *
 * Description: Program that determine a random number is positive or negative.
 *
 * Return:Always 0 Success
 */

/*Betty style document for function main*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i\n is positive", n);
	}
	else if (n == 0)
	{
		printf("%i\n is zero", n);
	}
	else
	{
		printf("%i\n is negative", n);
	}
	return (0);
}
