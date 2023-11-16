#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function that print name
 * @name: name to print
 * @f: function
 *
 * return: name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
