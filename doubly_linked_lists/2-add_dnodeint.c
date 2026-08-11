#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning
 * @head: pointer to the head
 * @n: value of the new node
 *
 * Return: new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
