#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets its head to NULL.
 * @head: A pointer to a pointer to the first node of the list to be freed.
 **/
void free_listint2(listint_t **head)
{
    listint_t *next_node;

    if (head == NULL)
        return;

    while (*head != NULL)
    {
        next_node = (*head)->next;
        free(*head);
        *head = next_node;
    }

    *head = NULL;
}

