#include <stdio.h>

/**
 * print_last_digit - function that display the last digit of a number
 * @n:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;


	putchar('0' + last);

	return (last);
}
