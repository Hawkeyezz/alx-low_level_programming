#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - calculating the figure of all the data in a listint_t list
 * @head: node in the linked list
 * Return: result of calculated sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
