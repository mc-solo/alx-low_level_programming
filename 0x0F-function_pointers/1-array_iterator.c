#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - write the array elements
 * @array: is an array
 * @size: magnitude
 * @action: pointer to print in regular or hex
 * Return: nothing (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array == NULL || action == NULL)
		return;

	for (count = 0; count < size; count++)
	{
		action(array[count]);
	}
}

