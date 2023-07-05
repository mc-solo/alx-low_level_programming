#include "main.h"

/**
 * factorial - gives the factorial of a number
 * @n: input number
 * retun: factorial for n >= 0 & -1 if n <0 
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	
	}
	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}

