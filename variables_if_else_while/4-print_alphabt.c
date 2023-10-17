#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Alwys 0 (Succes)
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)

		if (lower != 'q' && lower != 'e')

		putchar (lower);
	{
		putchar ("\n");
	}

	return (0);
}
