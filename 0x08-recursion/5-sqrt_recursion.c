#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Funtion to return square root
 * of natural numbers
 * @n: Integer 
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_root(1, n));
}
/**
 * _root - To find square root
 * @p: previous value
 * @r: square root value
 * Return: the square root
 */
int _root(int p, int r)
{
	if (p > r)
		return (-1);
	else if (p *p == r)
		return (p);
	return (_root(p + 1, r));
}
