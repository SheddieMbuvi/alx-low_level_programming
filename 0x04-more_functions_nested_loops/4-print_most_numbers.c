#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 * i: number to be printed
 *
 * Return: 1 if successful else 0
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 2 && i != 4)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
