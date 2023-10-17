#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int nbr;

	for (nbr = '0'; nbr <= '9'; nbr++)
	{
		putchar (nbr);
	}
	for (nbr = 'a'; nbr <= 'f'; nbr++)
	{
		putchar (nbr);
	}

	putchar('\n');

	return (0);
}
