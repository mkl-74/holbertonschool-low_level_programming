#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastnbr;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastnbr = (n % 10);

if (lastnbr > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastnbr);
}
else if (lastnbr < 6 && lastnbr != 0)
{
	printf("Last number of %d is %d and is less than 6 and not 0\n", n, lastnbr);
}
else
{
	printf("Last number of %d is %d 0\n", n, lastnbr);
}
	return (0);
}
