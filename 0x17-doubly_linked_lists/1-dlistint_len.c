#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - Returns number of element in a list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements in a list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
