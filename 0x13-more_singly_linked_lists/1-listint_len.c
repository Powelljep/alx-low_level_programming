#include <stdlib.h>
#include "lists.h"
/**
 * listint_len -  a function that returns the
 * number of elements in a linked listint_t list.
 * @h: linked list pointer
 *
 * Return : the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	sizet_t numofelems = 0;
	const listint_t *p = h;

	while (p != NULL)
	{
		numofelems++;
		p = p->next;
	}

	return (numofelems);
}
