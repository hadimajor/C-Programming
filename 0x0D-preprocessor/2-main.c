#include <stdio.h>

/**
 * main - Program prints the name of file it was compiled from
 *
 * Return: 0 (Success)
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
