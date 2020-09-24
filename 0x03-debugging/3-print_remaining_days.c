#include <stdio.h>
#include "holberton.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
/* First if assumes leap year */

/* If the year is divisible by 4 or the year is divisible by 400
 * and the year is not divisible by 100 */
/* Doesn't work. If it's divisible by 400 then it's also divisible by 100 */

	if ((year % 4 == 0 || year % 400 == 0) && (year % 100 == 0))
	{

/* If it's February 29 or later */

		if (month >= 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
/* If it is not a leap year but it is Feb 29 */
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
/* If it is not a leap year but it isn't Feb 29 */
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
