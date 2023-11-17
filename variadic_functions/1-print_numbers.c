#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - print a number following a separator
* @separator: print separator between number
* @n: number of integer in the function
* @...: list with inger to print
*
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;


	unsigned int i = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)

	{
		if (i < n-1 && separator != NULL)
		{
			printf("%d", va_arg(args, int));
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(args, int));
	}

	va_end(args);

	printf("\n");
}
