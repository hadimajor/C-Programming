#include <stdio.h>

/**
* main - Entry point
*
* Description: Program that prints numbers of base 10 using putchar.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	char c;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
