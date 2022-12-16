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
	int j = 0;

	while (j < 11)
	{
		int i = 0;

		while (i < 15)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
