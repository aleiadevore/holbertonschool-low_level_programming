#include "holberton.h"

/**
 * jack_bauer - Prints every minute of a day
 *
 * Description: Prints every minute of a 24 hr day
 *
 * Return: void
 */

void jack_bauer(void)
{
/*
 * Two parts. Before colon will print double digit numbers from 00 to 23.
 * After colon will print from 00 to 59.
*/

/* Has 1440 lines that are 5 characters wide */

/* Creates a loop of 24 */
	int b, c, h, r, m, t;
	b = 0;

	while (b < 24)
	{
		c = 0;

		while (c < 60)
		{
			h = (b / 10);
			r = (b % 10);
			m = (c / 10);
			t = (c % 10);

			_putchar ('0' + h);
			_putchar ('0' + r);
			_putchar (':');
			_putchar('0' + m);
			_putchar('0' + t);
			_putchar ('\n');
			c++;
		}
		b++;
	}
}
