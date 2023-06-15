#include "lists.h"

/**
 * free_dlistint - function to free a list
 *
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *start;

    start = head->next;

    while (start->prev)
    {
        free(start->prev);
        start = start->next;
    }
}
