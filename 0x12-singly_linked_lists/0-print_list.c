#include "lists.h"
#include <stdio.h>

/**
 * print_list - Fxn prints all elements of a list_t list
 *
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	counter++;
	}
	return (counter);
}
