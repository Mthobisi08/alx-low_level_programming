#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listin - function that reverses a listint_t linked list
 *@head: pointer of a list.
 * Return: prev
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next = NULL;

while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

return prev;
}
