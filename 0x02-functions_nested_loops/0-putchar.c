#include <unistd.h>

/**
 * main - prints _putchar  to stdout
 *
 * Description : Program to print _putchar
 *
 * Return : Always 0 (Success)
 *
 */

int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
