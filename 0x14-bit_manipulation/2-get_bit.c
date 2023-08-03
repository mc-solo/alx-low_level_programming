#include "main.h"

/**
 * get_bit - return value of a bit at a given index
 * @n: base 10 param
 * @index: index value
 * Return: val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
