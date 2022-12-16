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
		
		for (i = 48; i < 58; i++)
		{
			if (i >= 48)
			{
			_putchar((i / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');	
	}
}
