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
<<<<<<< HEAD
	if (name != NULL && f != NULL)
	f(name);
}
=======
    if (name != NULL && f != NULL)
    f(name);
}
>>>>>>> b7441f673161e55b051a477dd38bd078cc36b83b
