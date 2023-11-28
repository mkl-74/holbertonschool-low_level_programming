#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

typedef struct list_s
{
	char *str;

	unsigned int len;

	struct list_s *next;
} list_t;


/*Prototypes*/

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif