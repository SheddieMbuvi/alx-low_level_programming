#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Function to retuen x poer y
 * @x: integer
 * @y: power
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
