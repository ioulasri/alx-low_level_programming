#include "lists.h"

/**
 * free_listint - Frees a linked list and sets the head pointer to NULL.
 * 
 * @head: A pointer to the head of the linked list.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = *head;
	while (*head)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
	}
}

int main(void)
{
    listint_t *head;

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
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}