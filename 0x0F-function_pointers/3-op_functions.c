#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_mod - function for modulus
 * @a: int 1
 * @b: int 2
 * Return: a%b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
/**
 * op_div - functio retuning divided
 * @a: interger 1
 * @b: integrt 2
 * Return: a/b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mul - for multiplication
 * @a: int 1
 * @b: int 2
 * Return: product of two ints
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_add - function adding 2 numbers
 * @a: int 1
 * @b: int 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function for diff
 * @a: int 1
 * @b: int 2
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
