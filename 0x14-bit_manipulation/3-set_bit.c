#include <stdlib.h>
#include "main.h"
/**
 * set_bit - A function that sets a bit at given index to 1
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if it worked, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	char *arr;
	unsigned int i, num;

	arr = malloc((index + 2) * sizeof(*arr));
	if (arr == NULL)
		return (-1);

	arr[0] = '1';
	for (i = 1; i < index + 1; i++)
		arr[i] = '0';
	arr[index + 1] = 0;

	num = binary_to_uint(arr);
	free(arr);
	*n |= num;

	return (1);
}
