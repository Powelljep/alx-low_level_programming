#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to head node pointer
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n:  data to include in the node
 *
 * Return:the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnode, *temp, *p = *head;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (!p)
	{
		newnode->next = NULL;
		p = newnode;
		return (newnode);
	}
	while (p != NULL && i < idx)
	{
		temp = p;
		p = p->next;
		i++;
		if (i == idx && p == NULL)
		{
			newnode->next = NULL;
			p = newnode;
		}

		if (i == idx)
		{
			newnode->next = p;
			temp = newnode;
		}
	}
	return (newnode);

}
