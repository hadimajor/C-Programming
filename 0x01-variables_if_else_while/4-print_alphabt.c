#include <stdio.h>

/**
* main - Entry point
*
* Description: Program that prints the alphabet
* in lowercase except e and q.
*
*
* Return: 0 (Success)
*
*/

int main(void)
{
	char c, e, q;

	e = 'e';
	q = 'q';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != e && c != q)
			putchar(c);
	}
	putchar('\n');
	return (0);
}
