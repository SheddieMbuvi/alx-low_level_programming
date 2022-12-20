#include <stdio.h>
#include "main.h"
/**
 * puts2 - Function to print every other character of a string, starting with the first character
 * @str: the string memory location
 * Return: the string
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;
	
	for (; i <= len; i +=2)
		_putchar(str[i]);

	_putchar('\n');
}
