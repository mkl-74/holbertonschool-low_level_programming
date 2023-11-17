#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*
*
*
*
*
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	const char *str;
    unsigned int i = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)

	{
		str = va_arg(args, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
