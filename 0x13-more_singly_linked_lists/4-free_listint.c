#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - to free up a linked list
 * @head: listint_t list that wil be freed
 */

void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
