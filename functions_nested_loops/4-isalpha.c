#include "main.h"

/**
 * _isalpha - permet de tester si un caractère est alphabétique ou non.
 * @c:
 *
 * Return: 1 if the alphabet charactere. 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' &&  c <= 'Z')
		{
		return (1);
		}
	else
		return (0);
}
