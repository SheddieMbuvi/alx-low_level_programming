#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * i: the characters to be printed
 *
 * Return: 1 success else 0
 */
void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
