#include <stdio.h>

/**
* main - Entry point
*
* Description: Program that prints the alphabet
* in lowercase, excluding q and e.
*
*
* Return: 0 (Success)
*
*/

int main(void)
{
	char c;
/* print the alphabet in lowercase */


	for (c = 'a'; c <= 'z'; c++)
	{
		while (c != 'e' && 'q')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
