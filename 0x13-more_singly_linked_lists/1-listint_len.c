#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the first node of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
    size_t len = 0;

    while (h != NULL)
    {
        len++;
        h = h->next;
    }

    return (len);
}
