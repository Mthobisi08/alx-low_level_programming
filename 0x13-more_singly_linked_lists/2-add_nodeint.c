#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the first node of the list.
 * @n: Data of the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

/* Create new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

/* Set data */
new_node->n = n;

/* Set next */
new_node->next = *head;

/* Set head to the new_node */
*head = new_node;

return (*head);
}
