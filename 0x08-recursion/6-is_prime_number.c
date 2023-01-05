#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Checks for prime numbers
 * @n: integer being checked
 * Return: 1 for prime else 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (is_divisible(n, div));
}
/**
 * is_divisible - checks if number is divisible
 * @num: the number to be checked
 * @div: the result
 * Return: 1 if num is divisible else 0
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
