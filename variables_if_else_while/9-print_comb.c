#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Access)
 */
int main(void)
{
	int nbr;

	for (nbr = '0'; nbr <= '9'; nbr++)
	{
		putchar (nbr);
	if (nbr!='9')
	{
		putchar (',');
		putchar (' ');
	}
	}
		putchar ('\n');
	
	return (0);
}
