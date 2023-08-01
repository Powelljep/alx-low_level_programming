#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to head node pointer
 *
 * Return: returns the head node’s data (n).
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *p, *temp;
	int n = 0;

	if (head == NULL)
		return (n);
	p = *head;
	n = p->n;
	temp = p->next;
	p = NULL;
	free(p);
	*head = temp;
	return (n);
}
