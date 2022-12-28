#include <stdio.h>
#include "main.h"
/**
 * times_table - Function to print time tables
 * Description: Prints time table
 * Return: o Success
 */
void times_table(void)
{
	int i, j, m;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			m = i * j;
			if (m > 9 && i != 9)
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (m <= 9 && i == 9)
			{
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m > 9 && i == 9)
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			else if (m == 0 && i == 0)
			{
				_putchar(m + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (m <= 9 && i != 9)
			{
				_putchar(' ');
				_putchar(m + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
