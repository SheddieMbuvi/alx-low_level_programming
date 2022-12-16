#include <stdio.h>
#include "main.h"
/**
 * more_numbers - function to print more numbers
 * i: integer to print
 * j: number of times to print
 * Return: 1 success else 0 
 */
void more_numbers(void)
{
	int j;

	while (j = 0; j <= 10; j++)
	{
		int i;

		while (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
