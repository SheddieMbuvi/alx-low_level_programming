#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: The arguments' counter
 * @argv: The argument's values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int result = 0, num1, num2, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		num1 = atoi(argv[argc]);
		num2 = atoi(argv[argc]);
		result = num1 + num2;
		}
		
	}
	printf("%d\n", result);
	return (0);
}


