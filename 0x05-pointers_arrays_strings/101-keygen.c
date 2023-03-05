#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int myrandom;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrandom = (rand() % 125) + 1;
		printf("%c", myrandom);
		total -= myrandom;
	}
	printf("%c", total);

	return (0);
}
