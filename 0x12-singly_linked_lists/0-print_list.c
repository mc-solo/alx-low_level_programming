#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the members of a linked list
 * @h:link to the next node in list_t
 *
 * Return: the number of node
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
