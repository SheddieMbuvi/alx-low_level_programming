#include <stdio.h>
#include "main.h"
/**
 * times_table - Function to print time tables
 * Description: Prints time table
 * Return: o Success
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if ((k / 10) == 0)
			{
				if (j != 10)
				{
					_putchar(' ');
					_putchar(n  + '0');
				}
				if (j == 9)
				{
					continue;
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
					if (j == 9)
					{
						continue;
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
