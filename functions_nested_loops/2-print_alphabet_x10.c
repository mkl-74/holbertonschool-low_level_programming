#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 *
 */
void print_alphabet_x10(void)
{

char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		for (alph = 0; alph < 10; alph++)
		{
			_putchar(alph);
		}
	}
}
