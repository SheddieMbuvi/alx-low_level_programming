#include <stdio.h>
#include "main.h"
/**
 * main Fizz buzz things
 * Return: Always 0 success
 */
int main(void)
{
	int i =1;

	for (; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzzz\n");

	return (0);
}
