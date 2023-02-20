#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints a sting of exact characters.
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char a[] = "Text here";

	a = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fprintf(stdout, "%s", a);
	return (1);
}
