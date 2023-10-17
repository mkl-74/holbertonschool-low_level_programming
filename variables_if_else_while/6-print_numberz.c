#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	int debut = 0;
	int fin = 9;
	int incr;

	for (incr = debut; incr <= fin; incr++)
	{
		putchar('0' + incr);

	}
	putchar("\n");

	return (0);
}
