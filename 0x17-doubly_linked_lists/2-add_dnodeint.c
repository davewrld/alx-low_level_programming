#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 *
 * @head: Head
 *
 * @n: value
 *
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NUll)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head !=  NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
