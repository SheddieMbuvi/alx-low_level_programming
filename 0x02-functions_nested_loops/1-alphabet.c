#include <stdio.h>
#include "main.h"
/**
 * main - Start here
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}
