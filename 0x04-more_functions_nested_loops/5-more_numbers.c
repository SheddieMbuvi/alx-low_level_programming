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
		int i =  0;
		
		for (i < 15)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
			i++;
		}
		j++;
		_putchar('\n');	
	}
}
