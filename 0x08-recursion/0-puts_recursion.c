#include "main.h"
/**
 * *_puts_recursion - print a string to the cosole
 * @s: pointer to a string to print
 * return: void 
 */

void _puts_recursion(char *s)
{
	if(*s == '\0')
		putchar('\n');
	else
	{
		putchar(s[0]);
		puts_recursion(s + 1);
	}
}
