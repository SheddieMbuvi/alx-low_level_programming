#include <stdlib.h>
/**
 * int_index - funtion that searches for integer
 * @array: the array being searched from
 * @size: the array size
 * @cmp: compare function
 * Return: The index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
