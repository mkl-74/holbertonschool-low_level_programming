#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - function that search a integer
* @array: array of integer
* @size: a size of the array
* @cmp: ptr of function
* return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	{
	return (i);
	}
	}
	return (-1);
}
