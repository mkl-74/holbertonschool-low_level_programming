#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */
/**	int i;

	for (i = '0', i <= '9', i++)
	{
		if (*s != i && *s = )
			return (0);
	}
		else
	{
			return (i);
	}		
*/
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;

    if (*s == '-')
    {
        sign = -1;
        s++;
    } else if (*s == '+')
    {
        s++;
    }

    for (; *s >= '0' && *s <= '9'; s++) {
        result = result * 10 + (*s - '0');
    }

    return result * sign;
}
