#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 *
 */
void print_alphabet_x10(void)
{

	char alph;
	int line;

	for (line = 0; line < 10; ++line)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
	{
			_putchar (alph);
		}
		_putchar ('\n');
	}
}
