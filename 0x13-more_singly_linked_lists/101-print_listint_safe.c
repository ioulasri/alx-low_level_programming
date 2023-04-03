#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t num_nodes = 0;
	int is_loop = 0;

	if (head == NULL)
		exit(98);

	while (slow && fast && fast->next)
	{
		num_nodes++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			is_loop = 1;
			break;
		}
	}

	if (!is_loop)
	{
		num_nodes++;
		printf("[%p] %d\n", (void *)slow, slow->n);
	}

	slow = head;
	while (is_loop && slow != fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next;
		num_nodes++;
	}

	if (is_loop)
		printf("-> [%p] %d\n", (void *)fast, fast->n);

	return (num_nodes);
}
