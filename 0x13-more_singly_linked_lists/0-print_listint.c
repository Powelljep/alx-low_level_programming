#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to list 
 *
 * Return:  the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int numofnodes = 0;
	const listint_t *p = h;

	while (p->next != NULL)
	{
		printf("%d\n", p->n);
		numofnodes++;
		p = p->next;
	}

	return (numofnodes);
}
