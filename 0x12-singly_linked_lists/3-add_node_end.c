#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
 * add_node_end - adding a new node at the end of a linked list
 * @head: double pointer to list-t list
 * @str: new string to input in the node
 * Return: address of the new element, else NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str);{
list_t *new_node = malloc(sizeof(list_t));
{
if (new_node == NULL)
return NULL;
}
char *dup_str = strdup(str);
if (dup_str == NULL) 
{
free(new_node);
return NULL;
}
new_node->str = dup_str;
new_node->next = NULL;
if (*head == NULL) 
{
*head = new_node;
} 
else 
{
list_t *current = *head;
while (current->next != NULL) 
{
current = current->next;
}
current->next = new_node;
}
return new_node;
}
