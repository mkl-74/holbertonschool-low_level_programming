#include "main.h"
#include <stdio.h>

/**
 *  _abs(int) - return the absolute value of the number
 * @c:
 *
 * Return: 0
 *
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
