#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to the first node pointer
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, temp;
	int i = 0;

	if (*head == NULL)
		return (-1);
	p = *head;

	while (p != NULL && i < index)
	{
		p = p->next;
		i++;
	}
	temp = p->next;
	p = temp->next;
	free(temp);
	return (1);
}
