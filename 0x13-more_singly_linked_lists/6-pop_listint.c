#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - wipes the head node of a linked list
 * @head: pointing to the first element in the linked list
 * Return: data inside the elements that was wiped, else 0 for an empty list
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}
