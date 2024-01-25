#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of linked list.
 * @head: Pointer to the head of the list.
 * @n: Integer to be stored in the new node.
 *
 * Return: Pointer to a new node else NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
