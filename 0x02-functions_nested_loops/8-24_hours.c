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

	while (i = '0'; i <= 2; i++)
	{
		int j;
		
		while (j = '0'; j <= '9'; j++)
		{
			if (i == '2' && j == '3')
			{
				break;
			}
			_putchar(':');
			int k;

			while (k = '0'; k <= '5'; k++)
			{
				int l;

				while (l = '0'; l <= '9'; l++)
				{
					if (k == '5' && l == '9')
					{
						break;
					}
				}
			}
		}
	}
	_putchar('\n');
}


