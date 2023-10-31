#include "main.h"

/**
 * _sqrt_recursion - return the square of the number
 * @n: integer
 *
 *
 * Return: the square
 */

int (i * i <= n) 
{
            i++;
}
        i--;
        return i;




int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else/* (x == n)*/
	{		
	return n * _sqrt_recursion(n - 1);
	}
}
