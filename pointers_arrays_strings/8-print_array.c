#include "main.h"
#include <stdio.h>

/**
 * print_array - display n elements of array
 * @a: ptr
 * @n:
 *
 *
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	if (i < n - 1)
	{
	printf(", ");
	}
}

	printf("\n");
}
