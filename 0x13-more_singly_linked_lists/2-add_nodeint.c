#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a new node to be added at the start of a linked list
 * @head: our pointer to the first node in the linked list
 * @n: our data to put in the new node
 * Return: points to the new node, else NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
