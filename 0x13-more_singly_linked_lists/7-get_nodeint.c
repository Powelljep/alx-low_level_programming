#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first node in the linkedlist
 * @index: of the node, starting at 0
 *
 * Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i = 0;

	p = head;
	if (p == NULL)
		return (NULL);

	while (p != NULL && i < index)
	{
		p = p->next;
		i++;
	}
	return (p);
}
