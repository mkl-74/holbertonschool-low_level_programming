#include "main.h"
 
/**
 * _islower - checks for lowercase character.
 * @c:
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		{
		return (1);
		}
	else
		return (0);
}
