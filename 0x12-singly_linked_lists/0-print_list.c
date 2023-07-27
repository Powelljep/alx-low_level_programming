#include <stdlib.h>
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
	unsigned int i = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("%c", h->str);
		numofnode++;
		h->next;
	}
	return (numofnodes);
}
