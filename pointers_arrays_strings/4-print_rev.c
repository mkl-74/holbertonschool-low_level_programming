#include "main.h"

/**
 * print_rev - print a reverse string.
 * @i: variable
 * @s: variable string
 *
 *return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
			_putchar(s[i]);
	}
}
