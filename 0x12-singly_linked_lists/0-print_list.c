#include "list.h"
#include <stdlib.h>

/**
 * print_list - returns all elements of list_t.
 * @h: list_t list.
 *
 * Return: Number of node in h.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else 
			printf("[%d] %s\n", h->len, h->str);

		coun++;
		h = h->next;
	}

	return (count);
}
