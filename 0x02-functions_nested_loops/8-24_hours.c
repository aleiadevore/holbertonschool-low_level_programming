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

	int b = 0;

	while (b <= 23)
	{
		int h = 0;

/*
 * Code is wanting to go up to 24 and then restart. I need it to repeat numbers
 * until after colon hits 59. Use same intiger? That way it can't move until the
 * minutes are correct
 */
		while (h < 24)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			h++;
			while (h < 59)
			{
/*
 * If I used the same variable, they wouldn't move at different numbers
 */

/*After colon */
			_putchar (':');
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			h++;
			}
		_putchar ('\n');
		}
		b++;
	}

}
