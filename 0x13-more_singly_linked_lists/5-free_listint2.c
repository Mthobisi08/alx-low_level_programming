#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list
 * @head: head of list.
 */

void free_listint2(listint_t **head)
{
listint_t *current, *tmp;

if (head == NULL
{
return;

current = *head;
while (current != NULL)
{
tmp = current;
current = current->next;
free(tmp);
}

*head = NULL;
}
