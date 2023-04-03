#include "lists.h"

/**
 * pop_listint - Removes the first node from a linked list
 * and returns its integer value.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: The integer value of the first node on success, or 0 on failure.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *new_head;

	if (!*head)
		return (0);
	n = (*head)->n;
	new_head = (*head)->next;
	*head = new_head;
	return (n);
}

int main(void)
{
    listint_t *head;
    int n;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
