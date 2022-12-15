#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Funtion entry point
 *@n: the value of inputs
 *i: initialize number of outputs
 *Return: Always return 0 Success
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
