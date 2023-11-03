#include <stdio.h>
#include <stdlib.h>

/**
*
*
*
*/
int main(void)
{
	int i;
	int x;
	int y;
	
	for (i = '0'; i <= '9'; i++)
	{
		
		for (x = i + 1; x <= '9'; x++)
		{
	
			for (y = x + 1; y <= '9'; y++)
			{
			putchar(i);
			putchar(x);
			putchar(y);
	
			if (i < '7' || x < '8' || y < '9')
			{
				putchar(',');
				putchar(' ');
			}
	
			}
		}
	}
		putchar('\n');

		return (0);
}
		
