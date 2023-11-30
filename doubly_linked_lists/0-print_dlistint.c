#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - prints the elements of a dlistint_t list
 * @h: pointer of the head
 *
 * Return: the number of element (node)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}