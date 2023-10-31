#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value of an integer
 * @nbr:  is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int nbr)
{
	if (nbr > 0 || nbr == 0)
	{
	return (nbr);
	}
	else
	return (nbr * -1);
}
