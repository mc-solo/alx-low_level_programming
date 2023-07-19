#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: is an array
 * @size: no of elements in array
 * @cmp: a ptr to one of the 3 fx's in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]))
			return (count);
	}
	return (-1);
}

