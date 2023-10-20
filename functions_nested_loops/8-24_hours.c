#include "main.h"
#include <time.h>

/**
 * jack_bauer - that prints every minute of the day of Jack Bauer.
 *
 *
 *
 *
 */
void jack_bauer(void)
{
	int heures;
	int minutes;

	for (heures = 0; heures <= 59; heures++)
	{
		for (minutes = 0; minutes <= 59; minutes++)

			{
				_putchar (heures / 10 + '0');
				_putchar (heures % 10 + '0');
			}
			{
				_putchar (':');
			}
			{
				_putchar (minutes / 10 + '0');
				_putchar (minutes / 10 + '0');
			}
	}
}
