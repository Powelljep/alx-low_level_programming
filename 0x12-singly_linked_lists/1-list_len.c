#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to linkedlist nodes.
 *
 * Return: returns the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t lenofh = 0;

	while (h != NULL)
	{
		lenofh++;
		h = h->next;
	}

	return (lenofh);
}
