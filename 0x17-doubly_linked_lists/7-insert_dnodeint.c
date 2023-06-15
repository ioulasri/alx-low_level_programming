#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 *
 * @h: the head
 * @idx: index to insert at
 * @n: data n for the new node
 * Return: pointer the newly created node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr, *next;

	if (!new_node)
		return (NULL);

	curr = *h;
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	while (--idx && curr)
		curr = curr->next;
	next = curr->next;
	curr->next = new_node;
	new_node->prev = curr;

	new_node->next = next;
	next->prev = new_node;
	return (new_node);
}
