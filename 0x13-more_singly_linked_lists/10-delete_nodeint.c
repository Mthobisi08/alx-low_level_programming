#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node from a linked list
 * @head: Pointer to the starting node of the linked list
 * @index: Position of the node to be deleted
 *
 * Return: 1 if the operation is successful or else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev, *curr;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
curr = *head;
*head = (*head)->next;
free(curr);
return (1);
}

prev = *head;
curr = (*head)->next;

for (i = 1; curr != NULL && i < index; i++)
{
prev = curr;
curr = curr->next;
}

if (curr == NULL)
return (-1);

prev->next = curr->next;
free(curr);

return (1);
}

