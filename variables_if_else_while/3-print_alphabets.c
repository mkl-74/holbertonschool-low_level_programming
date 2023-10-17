#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower;
	int upper;

	for (lower = 'a'; lower <= 'z'; lower++)
{
	putchar(lower);

}

	for (upper = 'A'; upper <= 'z'; upper++)
{
	putchar(upper);
}

	putchar('\n');

	return (0);
}
