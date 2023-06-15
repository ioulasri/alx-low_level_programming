#include "lists.h"

/**
 * dlistint_len - computing the length of a double linked list
 * @h: the head
 * Return: the size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t size = 0;

	if (!curr)
		return (0);
	while (curr)
	{
		curr = curr->next;
		size++;
	}
	return (size);
}

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

	if (!new_node || dlistint_len(*h) < idx)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == dlistint_len(*h) - 1)
		return (add_dnodeint_end(h, n));

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
