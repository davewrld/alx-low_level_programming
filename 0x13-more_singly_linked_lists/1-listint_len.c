#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head of the listint_t list.
 * Retun: Interger.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cnr = 0;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
}
