#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Function to print every minute of the day
 *
 * Return:  0 (success)
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; a <= 23; a++)
	{
		for (j = 0; j <= 59; j++)
		{

			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}
}
