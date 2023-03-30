#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str != NULL)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
count++;
h = h->next;
}

return (count);
}


