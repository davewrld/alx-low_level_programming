#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - add new node at beginning of list.
 * @head: pointer. 
 * @n: integer.
 * Return: address else NULL if  failed.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new  == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

