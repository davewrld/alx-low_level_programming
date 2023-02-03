#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - add node at the end of list.
 * @head: pointer
 * @n: integer
 * Return: address of new elemrnt else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	lisint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last =*head;
		while (last->next != NULL)
			last = lasr->next;
		last->next = new;
	}

	return (*head);
}
