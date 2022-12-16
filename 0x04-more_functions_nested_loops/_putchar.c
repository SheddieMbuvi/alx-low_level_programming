#include <unistd.h>
/**
 * _putchar.c - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set approprietely.
 */
int _putchar.c(char c)
{
	return (write(1, &c, 1));
}
