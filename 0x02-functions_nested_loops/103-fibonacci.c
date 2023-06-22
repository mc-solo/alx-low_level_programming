#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long int fib1=0, fib2=1, sum;


	for (count = 0; count < 50; count++)
	{
			sum = fib1 + fib2;
			printf("%lu", sum);

			fib1=fib2;
			fib2=sum;

			if (count == 49)
				print("\n");
			else
				printf(",")

		
	}


	return (0);
}

