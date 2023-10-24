#include "main.h"
#include <stdio.h>

/**
 * puts - print a string to stdout.
 * @str is a string
 *
 * Return: string
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
