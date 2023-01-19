#include <stdlib.h>
/**
 * array_iterator - Function to execute
 * @array: A pointer
 * @size: size of array
 * @action: action
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
