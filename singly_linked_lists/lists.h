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


#endif