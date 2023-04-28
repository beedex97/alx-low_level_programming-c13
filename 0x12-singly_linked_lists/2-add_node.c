#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function with two arguments
 * @head: double pointer to linked list
 * @str: string pointer to add in the node
 *
 * Description: adds a new node at the beginning
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *prop;

	prop = malloc(sizeof(list_t));
	if (prop == NULL)
		return (NULL);
	prop->str = _strdup(str);
	while (str[count] != '\0')
		count++;
	prop->len = count;
	prop->next = *head;
	*head = prop;
	return (prop);
}
