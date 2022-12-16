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

	while (j = 0; j < 11; j++)
	{
		int i;
		
		while (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
			_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');	
	}
}
