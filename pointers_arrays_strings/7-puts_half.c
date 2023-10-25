#include "main.h"

/**
 * puts_half - print half of string
 *@str: string
 *
 *
 *
 *
 */
void puts_half(char *str)
{
	int i;
	int count = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
	}

	if (count % 2 == 1)
	i = count / 2;
	else
	i = (count - 1) / 2;

	for (i++; i < count; i++)
	_putchar(str[i]);

	 _putchar('\n');
}
