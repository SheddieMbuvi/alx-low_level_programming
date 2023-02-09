#include "main.h"
#include <stdlib.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: The number being printed
 * Return: no return value
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	if (n < 2)
	{
		_putchar(n + 48);
		return;
	}
	i = n & 1;
	n >>= 1;
	print_binary(n);
	_putchar(i + 48);
}
