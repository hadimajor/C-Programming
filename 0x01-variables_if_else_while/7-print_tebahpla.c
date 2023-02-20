#include <stdio.h>

/**
* main - Entry point
*
* Description: Program that prints the alphabet
* in lowercase.
*
*
* Return: 0 (Success)
*
*/

int main(void)
{
	char c = 'z';
/* print the alphabet in lowercase */

	while (c > 'a')
	putchar(c--);
	putchar('\n');
	return (0);
}
