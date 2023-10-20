#include "main.h"

/**
 *  void times_table - prints the 9 times table, starting with 0.
 *
 *
 *
 */
void times_table(void)
{
	int line;
	int column;
	int sum;

	for (line = 0; line <= 9; line++)
	{
		for (column = 0; column <= 9; column++)
		{
			sum = line * column;
			if (sum > 10)
				_putchar(sum / 10 + '0');
			_putchar(sum % 10 + '0');
			_putchar(',');
			_putchar(' ');

		}
		 _putchar('\n');
	}


}
