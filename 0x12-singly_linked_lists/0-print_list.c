#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: linked list pointer
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t numofnodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("%s", h->str);
		numofnodes++;
		h = h->next;
	}
	return (numofnodes);
}
