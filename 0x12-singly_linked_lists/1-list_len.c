#include "lists.h"

/**
 * list_len - Returns number of elements in linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
