#include <stdio.h>
#include "main.h"
/**
 * main - function reprinting its name
 * @argc: arguments count
 * @argv: arguments array
 * Return: its name
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
