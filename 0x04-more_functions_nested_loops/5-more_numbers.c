#include "main.h"

/**
 * more_numbers - program that 10 times the numbers from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (b <= 9)
	{
		while (a <= 14)
		{
			if (a > 9)
				putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			a++;
		}
		putchar('\n');
		b++;
		a = 0;
	}
}
