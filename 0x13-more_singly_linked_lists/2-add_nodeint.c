#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a pointer to a pointer to head of the linked list.
 * @n: the integer to be stored in the new node.
 * Return: the adress of the new node if Success, NULL otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
