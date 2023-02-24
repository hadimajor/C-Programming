#include "main.h"

/**
 * main - Program that prints 1 to 100
 *
 * multiples of 3 print fizz
 * multiple of 5 print buzz
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int h = 1;

	while (h <= 100)
	{
		if (h % 3 == 0 && h % 5 == 0)
			printf("FizzBuzz ");
		else if (h % 5 == 0)
		{
			if (h == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (h % 3 == 0)
			printf("Fizz ");

		else
			printf("%d ", h);
	h++;
	}
return (0);
}
