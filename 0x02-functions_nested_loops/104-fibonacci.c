#include "main.h"
#include <stdio.h>

/**
 * numLength - returns the length of string
 *
 * @n: function parameter
 *
 * Return: number of digits
 */

int numLength(int n)
{
	int length = 0;

	if (!n)
		return (1);

	while (n)
	{
		n = n / 10;
		length += 1;
	}

	return (length);
}

/**
 * main - main function
 *
 * Description: finds and prints the first 98 Fibonacci numbers
 *
 * Return: always 0
 */

int main(void)
{
	int count, i0s;
	unsigned long f1 = 1, f2 = 2, t, mx = 100000000, f1o = 0, f2o = 0, co = 0;

	for (count = 1 ; count <= 98 ; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		i0s = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && i0s > 0)
		{
			printf("%d", 0);
			i0s--;
		}

		printf("%lu", f1);

		t = (f1 + f2) % mx;
		co = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = t;
		f2o = co;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
