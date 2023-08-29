#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - to count the number of all unique nodes in a looped listint_t linked list.
 * @head: pointing to the head of the listint_t to check.
 * Return: If the list is not looped - 0, else - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
const listint_t *snake, *cat;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);
snake = head->next;
cat = (head->next)->next;
while (cat)
{
if (snake == cat)
{
snake = head;
while (snake != cat)
{
nodes++;
snake = snake->next;
cat = cat->next;
}
snake = snake->next;
while (snake != cat)
{
nodes++;
snake = snake->next;
}
return (nodes);
}
snake = snake->next;
cat = (cat->next)->next;
}
return (0);
}

/**
 * print_listint_safe - securely prints a listint_t list
 * @head: pointing to the head of the listint_t list.
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;
nodes = looped_listint_len(head);
if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
