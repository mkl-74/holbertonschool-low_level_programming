#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 *
 */
void print_alphabet_x10(void)
{

	char alph;
	int ligne;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		for (ligne = 0; ligne <= 10; ligne++)
		{
			_putchar (alph);
		}
		_putchar('\n');
	}
}
