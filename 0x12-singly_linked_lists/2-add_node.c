#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - returns length of a string
 * @s: string to be accessed
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: node address
 * @str: string to add
 * Return: address of new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = _strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}
