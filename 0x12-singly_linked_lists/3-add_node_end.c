#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - function with two arguments
 * @head: pointer to struct of linked list
 * @str: char type pointer to string
 *
 * Description: adds a new node at the end of linked list
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
 list_t *end node;
 list_t *temp = *head;
 unsigned int len = 0;

 while (str[len])
 len++;

 end node = malloc(sizeof(list_t));
 if (!end node)
 return (NULL);

 end node->str = strdup(str);
 end node->len = len;
 end node->next = NULL;

 if (*head == NULL)
 {
 *head = end node;
 return (end node);
 }

 while (temp->next)
 temp = temp->next;

 temp->next = end node;

 return (end node);
}
