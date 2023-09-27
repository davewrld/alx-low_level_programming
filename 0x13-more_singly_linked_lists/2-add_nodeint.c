#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds new node at the beginning of list.
 * @head: pointer to pointer of head list.
 * @n: Value to be added to the new node.
 *
 * Return: address of the new element, or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
