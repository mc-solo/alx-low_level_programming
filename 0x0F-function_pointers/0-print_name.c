#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Writes the name using ptr
 * @name: string to add
 * @f:a  pointer to function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

