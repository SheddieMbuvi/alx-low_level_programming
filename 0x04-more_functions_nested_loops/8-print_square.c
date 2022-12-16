#include <stdio.h>
#include "mine.h"
/**
 * print_square - funtion printing a square
 * @b: input integer
 * Return: 0 success
 */
void print_square(int b)
{
	int i, j;

	if (b > 0)
	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < b; j++)
			{
				_putchar(35);
			}
			putchar('\n');
		}
	}
	else
		_putchar('\n');
}
