#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - to print the whole element of the listint
 * @h: the linked list type of listint_t to print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
