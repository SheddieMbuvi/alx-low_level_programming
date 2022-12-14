#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Funtion that prints the last digit
 *
 * @i:  the number to  be checked
 * Return: 0 success
 */
int print_last_digit(int i)
{
	int LastDigit;

	LastDigit = i % 10;
	return (LastDigit);
}
