#include "lists.h"

/**
 * free_dlistint - function to free a list
 *
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *start = NULL;

    if (head)
        start = head->next;

    while (start->next)
    {
        free(start->prev);
        start = start->next;
    }
    free(start->prev);
    free(start);
}
