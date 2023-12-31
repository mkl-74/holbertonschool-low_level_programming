#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - print a strings following a separator
* @separator: print separator between number
* @n: number of string in the function
* @...: list with integer to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i = 0;

	char *str;

	va_start(args, n);



	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
	if (i < n - 1 && separator != NULL)
		{
		printf("%s", str);
		printf("%s", separator);
		}
		else if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}

	va_end(args);

	printf("\n");

}
