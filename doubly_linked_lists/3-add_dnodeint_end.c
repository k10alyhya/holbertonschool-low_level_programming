#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head: pointer to the head
 * @n: value of the new node
 *
 * Return: new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	h = *head;

	while (h->next != NULL)
		h = h->next;

	h->next = new;
	new->prev = h;

	return (new);
}
