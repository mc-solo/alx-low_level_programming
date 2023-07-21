#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: No. of arguments passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Or else - summation
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count, sum = 0;

	va_start(ap, n);

	for (count = 0; count < n; count++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

