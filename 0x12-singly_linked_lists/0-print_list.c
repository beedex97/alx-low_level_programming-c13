#include <stdio.h>
#include "lists.h"

/**
 * print_list - function with one argument
 * @h: pointer to the list_t list to print
 * 
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
 size_t b = 0;

 while (h)
 {
 if (!h->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %b\n", h->len, h->str);
 h = h->next;
 b++;
 }

 return (b)
