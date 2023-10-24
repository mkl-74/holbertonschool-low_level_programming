#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string to stdout.
 * @str is a string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	{
		putchar('\n');
	}
}
