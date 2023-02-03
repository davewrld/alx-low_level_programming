#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head of the listint_t list.
 * Retun: Interger.
 */
size_t listint_len(const listint_t *h)
{
	int count  = 0;
	const listint_t *h = head;

	while (listint_t = NULL)
	{
		count++;
		listint_t = listint_t->next;
	}
	return count;
}
